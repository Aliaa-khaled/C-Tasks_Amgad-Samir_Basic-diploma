#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void AddNodeEnd(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        new_node->next = new_node;
        return;
    }

    struct Node* last = (*head_ref);

    while (last->next != *head_ref) {
        last = last->next;
    }

    last->next = new_node;
    new_node->next = *head_ref;
}

void concatenateCircularLists(struct Node** head1_ref, struct Node** head2_ref) {
    if (*head1_ref == NULL) {
        *head1_ref = *head2_ref;
        return;
    }

    if (*head2_ref == NULL) {
        return;
    }

    struct Node* temp1 = *head1_ref;
    struct Node* temp2 = *head2_ref;

    while (temp1->next != *head1_ref) {
        temp1 = temp1->next;
    }

    while (temp2->next != *head2_ref) {
        temp2 = temp2->next;
    }

    temp1->next = *head2_ref;

    temp2->next = *head1_ref;
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

int main() {
    struct Node* head1 = NULL;
    struct Node* head2 = NULL;

    AddNodeEnd(&head1, 10);
    AddNodeEnd(&head1, 20);
    AddNodeEnd(&head1, 30);

    AddNodeEnd(&head2, 40);
    AddNodeEnd(&head2, 50);
    AddNodeEnd(&head2, 60);

    printf("linked list 1 after insertion the nodes:\n");
    printList(head1);

    printf("linked list 2 after insertion the nodes:\n");
    printList(head2);

    concatenateCircularLists(&head1, &head2);

    printf("Concatenated List:\n");
    printList(head1);

    return 0;
}
