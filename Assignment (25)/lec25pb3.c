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
    return (q->front == (q->rear + 1) % MAX_SIZE);  // Circular condition
}

int isEmpty(struct Queue* q) {
    return q->front == -1;
}

void enqueue(struct Queue* q, int new_data) {
    if (isFull(q)) {
        printf("Queue Overflow! Cannot enqueue %d.\n", new_data);
        return;
    }

    if (isEmpty(q)) {
        q->front = 0;
    }

    q->rear = (q->rear + 1) % MAX_SIZE;  
    q->items[q->rear] = new_data;
}

int dequeue(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return -1;
    }

    int dequeued = q->items[q->front];
    if (q->front == q->rear) {
        q->front = -1;
        q->rear = -1;
    } else {
        q->front = (q->front + 1) % MAX_SIZE; 
    }

    return dequeued;
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

    printf("Queue elements:");
    int i = q->front;
    while (i != q->rear) {
        printf("%d ", q->items[i]);
        i = (i + 1) % MAX_SIZE;  
    }
    printf("%d\n", q->items[q->rear]);
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
