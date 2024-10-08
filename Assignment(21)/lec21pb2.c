#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};
void insertAfterValue(struct Node* head, int targetValue, int newValue) {
    struct Node* temp = head;

   
    while (temp != NULL && temp->data != targetValue) {
        temp = temp->next;
    }

   
    if (temp != NULL) {
        
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        if (newNode == NULL) {
            printf("Memory allocation failed.\n");
            exit(1);
        }

        newNode->data = newValue;
        newNode->next = temp->next;
        temp->next = newNode;
        printf("Node with value %d inserted after node with value %d.\n", newValue, targetValue);
    } else {
        printf("Value %d not found in the list.\n", targetValue);
    }
}

void addNode(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));  // تخصيص ذاكرة للعقدة الجديدة
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
	
	int targetValue, newValue;
	printf("Enter the target value to insert the new node after: ");
    scanf("%d", &targetValue);
    printf("Enter the value of the new node: ");
    scanf("%d", &newValue);

    insertAfterValue(head, targetValue, newValue);

    displayLinkedList(head);

    return 0;
}
