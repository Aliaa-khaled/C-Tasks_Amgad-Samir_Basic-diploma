#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

void InsertBeforeValue(struct Node** head_ref, int target_value, int new_data) {
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

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;

    if (temp == *head_ref) {
        new_node->prev = NULL;
        new_node->next = *head_ref;
        (*head_ref)->prev = new_node;
        *head_ref = new_node;
        return;
    }

    new_node->next = temp;
    new_node->prev = temp->prev;

    if (temp->prev != NULL) {
        temp->prev->next = new_node;
    }

    temp->prev = new_node;
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

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

    while (last->next != NULL) {
        last = last->next;
    }

    last->next = new_node;
    new_node->prev = last;
}

int main() {
    struct Node* head = NULL;

    AddNodeEnd(&head, 50);
    AddNodeEnd(&head, 10);
    AddNodeEnd(&head, 60);

    printf("Linked list after inserting the nodes at the end:\n");
    printList(head);

    InsertBeforeValue(&head, 10, 20);
    printf("List after inserting 15 before 20:\n");
    printList(head);

    InsertBeforeValue(&head, 60, 20);
    printf("List after inserting 5 before 10:\n");
    printList(head);

    InsertBeforeValue(&head, 40, 20);
}
