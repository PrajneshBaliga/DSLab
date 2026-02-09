#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>

int max;
int *stack;
int top = -1;


bool isFull() {
    return top == max - 1;
}

bool isEmpty() {
    return top == -1;
}

void push(int value) {
    if (isFull()) {
        printf("\n[!] Stack Overflow! Cannot add %d\n", value);
    } else {
        stack[++top] = value;
        printf("\n[+] %d pushed to stack.\n", value);
    }
}

int pop() {
    if (isEmpty()) {
        printf("\n[!] Stack Underflow! No elements to remove.\n");
        return -1;
    } else {
        return stack[top--];
    }
}

void peek() {
    if (isEmpty()) {
        printf("\nStack is empty.\n");
    } else {
        printf("\nTop element is: %d\n", stack[top]);
    }
}

int main() {
    int choice, value;

    printf("Enter maximum size of the stack: ");
    if (scanf("%d", &max) != 1 || max <= 0) {
        printf("Invalid size. Exiting...\n");
        return 1;
    }

    stack = (int *)malloc(max * sizeof(int));
    if (stack == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    while (1) {
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Check Empty/Full\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                value = pop();
                if (value != -1) printf("Popped: %d\n", value);
                break;
            case 3:
                peek();
                break;
            case 4:
                if (isFull()) printf("Stack is Full.\n");
                else if (isEmpty()) printf("Stack is Empty.\n");
                else printf("Stack has space available (%d/%d used).\n", top + 1, max);
                break;
            case 5:
                free(stack); 
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

