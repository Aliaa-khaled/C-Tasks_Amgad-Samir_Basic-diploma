#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to create a doubly linked list
void createDoublyLinkedList(struct Node** head_ref, int n) {
    if (n <= 0) {
        printf("Number of nodes must be greater than 0.\n");
        return;
    }

    struct Node* temp;
    struct Node* new_node;
    
    for (int i = 0; i < n; i++) {
        new_node = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &new_node->data);
        
        if (*head_ref == NULL) {
            *head_ref = new_node;
            new_node->next = *head_ref; // Point the first node to itself
        } else {
            temp = *head_ref;

            // Traverse to the last node
            while (temp->next != *head_ref) {
                temp = temp->next;
            }

            temp->next = new_node; // Link the last node to the new node
            new_node->next = *head_ref; // Make the new node point to the head
        }
    }
}

void displayCircularList(struct Node* head) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    struct Node* temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}


int main() {
    struct Node* head = NULL;

    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
	
	createDoublyLinkedList(&head, n);
	
    printf("Doubly linked list after inserting the nodes:\n");
    displayCircularList(head);

    return 0;
}
