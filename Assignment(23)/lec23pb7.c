#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

void AddNodeEnd(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref; 
    
    new_node->data = new_data;
    new_node->next = NULL; 

    if (*head_ref == NULL) { 
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    new_node->prev = last;
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void DeleteNodeValue(struct Node** head_ref, int target_value) {
    struct Node* temp = *head_ref;

    if (temp == NULL) {
        printf("The list is empty.\n");
        return;
    }

    while (temp != NULL && temp->data != target_value) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value %d not found in the list.\n", target_value);
        return;
    }

    if (temp->prev != NULL) {
        temp->prev->next = temp->next; 
    } else {
        *head_ref = temp->next;
    }

    if (temp->next != NULL) {
        temp->next->prev = temp->prev; 
    }

    free(temp); 
}

int main() {
    struct Node* head = NULL; 
    
    AddNodeEnd(&head, 50);
    AddNodeEnd(&head, 10);
	AddNodeEnd(&head, 30);
    AddNodeEnd(&head, 60);
	
	printf("Linked list after inserting the nodes at the end:\n");
    printList(head);
	
	DeleteNodeValue(&head, 50);
	printf("List after deleting 50:\n");
    printList(head);
    DeleteNodeValue(&head, 30);
	printf("List after deleting 30:\n");
    printList(head);
    DeleteNodeValue(&head, 60);
	printf("List after deleting 60:\n");
    printList(head);
    
}
