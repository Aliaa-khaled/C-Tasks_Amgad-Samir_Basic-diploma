#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void addNodeEnd(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        new_node->next = *head_ref; 
        return;
    }

    while (last->next != *head_ref) {
        last = last->next;
    }

    last->next = new_node;
    new_node->next = *head_ref; 
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

    addNodeEnd(&head, 10);
    addNodeEnd(&head, 20);
    addNodeEnd(&head, 30);
    addNodeEnd(&head, 40);

    printf("Circular linked list:\n");
    displayCircularList(head);

    return 0;
}
