#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

void CreateDoublyLinkedList(struct Node** head_ref,int n) {
  
    if (n == 0) {
        printf("The list will remain empty.\n");
        return;
    }
	int  value;
    printf("Enter value for node 1: ");
    scanf("%d", &value);
    
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = value;
    new_node->prev = NULL;
    new_node->next = NULL;
    *head_ref = new_node;

    struct Node* current = *head_ref;
    
    for (int i = 2; i <= n; i++) {
        printf("Enter value for node %d: ", i);
        scanf("%d", &value);
        
        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
        new_node->data = value;
        new_node->next = NULL;
        new_node->prev = current;
        
        current->next = new_node;
        current = new_node;
    }
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

	int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    CreateDoublyLinkedList(&head,n);

    printf("linked list after insertion the nodes:\n");
    printList(head);

}
