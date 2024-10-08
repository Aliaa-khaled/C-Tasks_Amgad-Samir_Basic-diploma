#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5  

struct Stack {
    int items[MAX_SIZE];
    int top;
};

void initStack(struct Stack* s) {
    s->top = -1;
}

int isFull(struct Stack* s) {
    return s->top == MAX_SIZE - 1;
}

int isEmpty(struct Stack* s) {
    return s->top == -1;
}

void push(struct Stack* s, int new_data) {
    if (isFull(s)) {
        printf("Stack Overflow! Cannot push %d.\n", new_data);
        return;
    }
    s->items[++(s->top)] = new_data;
}

int pop(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Stack Underflow! Stack is empty.\n");
        return -1;
    }
    return s->items[(s->top)--];
}

int  top_element(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty.\n");
        return -1;
    }
    return s->items[s->top];
}

void display(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements:\n");
    for (int i = s->top; i >= 0; i--) {
        printf("%d ", s->items[i]);
    }
    printf("\n");
}

int main() {
    struct Stack stack;
    initStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    display(&stack);

    printf("Top element is %d\n", top_element(&stack));

    printf("Popped element: %d\n", pop(&stack));
    display(&stack);

    return 0;
}
