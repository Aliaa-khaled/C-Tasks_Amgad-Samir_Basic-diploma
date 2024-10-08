#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtPosition(struct Node** head, int position, int newValue) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = newValue;

    if (position == 1) {
        newNode->next = *head;
        *head = newNode;
        printf("Node with value %d inserted at position %d.\n", newValue, position);
        return;
    }

    struct Node* temp = *head;
    int currentPos = 1;

    while (temp != NULL && currentPos < position - 1) {
        temp = temp->next;
        currentPos++;
    }

    if (temp != NULL) {
        newNode->next = temp->next;
        temp->next = newNode;
        printf("Node with value %d inserted at position %d.\n", newValue, position);
    } else {
        printf("Position %d is out of bounds.\n", position);
        free(newNode);
    }
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
    int n, value, position, newValue;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter value for node %d: ", i);
        scanf("%d", &value);
        addNode(&head, value);
    }

    displayLinkedList(head);

    printf("Enter the position to insert the new node: ");
    scanf("%d", &position);
    printf("Enter the value of the new node: ");
    scanf("%d", &newValue);

    insertAtPosition(&head, position, newValue);

    displayLinkedList(head);

    return 0;
}
