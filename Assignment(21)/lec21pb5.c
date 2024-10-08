#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void deleteNode(struct Node** head, int targetValue) {
    struct Node* temp = *head;
    struct Node* prev = NULL;

    if (temp == NULL) {
        printf("The list is empty. Cannot delete value %d.\n", targetValue);
        return;
    }

    if (temp != NULL && temp->data == targetValue) {
        *head = temp->next;
        free(temp);
        printf("Node with value %d deleted (it was the first node).\n", targetValue);
        return;
    }

    while (temp != NULL && temp->data != targetValue) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value %d not found in the list.\n", targetValue);
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Node with value %d deleted.\n", targetValue);
}

void addNode(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void displayLinkedList(struct Node* head) {
    struct Node* temp = head;
    printf("The linked list is: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int n, value, deleteValue;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter value for node %d: ", i);
        scanf("%d", &value);
        addNode(&head, value);
    }

    displayLinkedList(head);

    printf("Enter the value of the node to delete: ");
    scanf("%d", &deleteValue);

    deleteNode(&head, deleteValue);
    displayLinkedList(head);

    return 0;
}
