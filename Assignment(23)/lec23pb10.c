#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void AddNode(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;

    if (*head_ref == NULL) {
        new_node->next = new_node; 
        *head_ref = new_node; 
    } else {
        struct Node* last = *head_ref;

        while (last->next != *head_ref) {
            last = last->next; 
        }

        last->next = new_node; 
        new_node->next = *head_ref; 
        *head_ref = new_node; 
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

    AddNode(&head, 50);
    AddNode(&head, 10);
    AddNode(&head, 60);

    printf("Circular linked list after insertions:\n");
    displayCircularList(head);

    return 0;
}
