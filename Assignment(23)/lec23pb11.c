#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

void AddNodeToEmptyList(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = new_node;
    *head_ref = new_node;
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

    AddNodeToEmptyList(&head, 50);

    printf("Linked list after inserting into an empty list:\n");
    displayCircularList(head);

}
