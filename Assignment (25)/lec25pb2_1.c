#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5  

struct Queue {
    int items[MAX_SIZE];
    int front, rear;
};

void initQueue(struct Queue* q) {
    q->front = -1;
    q->rear = -1;
}

int isFull(struct Queue* q) {
    return q->rear == MAX_SIZE - 1;
}

int isEmpty(struct Queue* q) {
    return q->front == -1 || q->front > q->rear;
}

void enqueue(struct Queue* q, int new_data) {
    if (isFull(q)) {
        printf("Queue Overflow! Cannot enqueue %d.\n", new_data);
        return;
    }
    if (q->front == -1) {
        q->front = 0;  
    }
    q->items[++(q->rear)] = new_data;
}

int dequeue(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue Underflow! Queue is empty.\n");
        return -1;
    }
    return q->items[(q->front)++];
}

int top_element(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return -1;
    }
    return q->items[q->front];
}

void display(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements:\n");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->items[i]);
    }
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
