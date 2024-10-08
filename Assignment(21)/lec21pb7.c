#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int findMiddleNode(struct Node* head) {
    struct Node* slow = head;
    struct Node* fast = head;

    if (head == NULL) {
        printf("The list is empty.\n");
        return -1;
    }

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->data;
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
    int n, value;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter value for node %d: ", i);
        scanf("%d", &value);
        addNode(&head, value);
    }

    displayLinkedList(head);

    int middleValue = findMiddleNode(head);
    printf("The middle node's value is: %d\n", middleValue);

    return 0;
}
