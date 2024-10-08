#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Queue {
    struct Node* front;
    struct Node* rear;
};

void initQueue(struct Queue* q) {
    q->front = q->rear = NULL;
}

int isEmpty(struct Queue* q) {
    return q->front == NULL;
}

void enqueue(struct Queue* q, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;

    if (isEmpty(q)) {
        q->front = q->rear = new_node;
        new_node->next = new_node; 
    } else {
        new_node->next = q->front;
        q->rear->next = new_node;
        q->rear = new_node;
    }

}

int dequeue(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return -1;
    }

    int dequeued;
    if (q->front == q->rear) {
        dequeued = q->front->data;
        free(q->front);
        q->front = q->rear = NULL;
    } else {
        struct Node* temp = q->front;
        dequeued = temp->data;
        q->front = q->front->next;
        q->rear->next = q->front; 
        free(temp);
    }

    return dequeued;
}

int top_element(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return -1;
    }
    return q->front->data;
}

void display(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }

    struct Node* temp = q->front;
    printf("Queue elements: ");
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != q->front);
    printf("\n");
}

int main() {
    struct Queue q;
    initQueue(&q);
	
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    display(&q);

    printf("Front element is %d\n", top_element(&q));

    printf("Dequeued element: %d\n", dequeue(&q));
    display(&q);

    return 0;
}
