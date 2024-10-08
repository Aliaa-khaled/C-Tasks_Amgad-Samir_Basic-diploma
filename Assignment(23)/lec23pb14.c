#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

void InsertAfterValue(struct Node** head_ref, int target_value, int new_data) {
    if (*head_ref == NULL) {
        printf("The list is empty.\n");
        return;
    }

    struct Node* temp = *head_ref;
    do {
        if (temp->data == target_value) {
            struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
            new_node->data = new_data;
            
            new_node->next = temp->next;
            new_node->prev = temp;
            
            temp->next->prev = new_node;
            temp->next = new_node;
            
            return;
        }
        temp = temp->next;
    } while (temp != *head_ref);

    printf("Value %d not found in the list.\n", target_value);
}

void printList(struct Node* head) {
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

void AddNodeEnd(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        new_node->next = new_node;
        new_node->prev = new_node;
        return;
    }

    struct Node* last = (*head_ref)->prev;

    new_node->next = *head_ref;
    (*head_ref)->prev = new_node;

    new_node->prev = last;
    last->next = new_node;
}

int main() {
    struct Node* head = NULL;

    AddNodeEnd(&head, 50);
    AddNodeEnd(&head, 10);
    AddNodeEnd(&head, 60);

    printf("Circular Doubly Linked List after inserting nodes at the end:\n");
    printList(head);

    InsertAfterValue(&head, 10, 20);
    printf("List after inserting 20 after 10:\n");
    printList(head);
    
    InsertAfterValue(&head, 60, 20);
    printf("List after inserting 45 after 60:\n");
    printList(head);

    InsertAfterValue(&head, 40, 20);  
}
