#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};


void AddNode(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    
    new_node->data = new_data;
    
    new_node->next = (*head_ref);
    new_node->prev = NULL;
    
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;
    
    (*head_ref) = new_node;
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL; 
    
    AddNode(&head, 50);
    AddNode(&head, 10);
    AddNode(&head, 60);
    
    printf("linked list after insertion the nodes:\n");
    printList(head);

}
