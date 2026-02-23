#include <stdio.h>
#include <stdlib.h>

int *queue;
int front = -1, rear = -1;
int max;

int isFull() {
    return rear == max - 1;
}

int isEmpty() {
    return front == -1;
}

void enqueue(int val) {
    if (isFull()) {
        printf("Overflow\n");
    } else {
        if (front == -1)
            front = 0;
        queue[++rear] = val;
        printf("Enqueued: %d\n", val);
    }
}

void dequeue() {
    if (isEmpty()) {
        printf("Underflow\n");
    } else {
        int val = queue[front];
        if (front >= rear)
            front = rear = -1;
        else
            front++;
        printf("Dequeued: %d\n", val);
    }
}

void update(int position, int newValue) {
    if (isEmpty()) {
        printf("Queue is Empty\n");
    } 
    else if (position < front || position > rear) {
        printf("Invalid position\n");
    } 
    else {
        queue[position] = newValue;
        printf("Updated position %d with value %d\n", position, newValue);
    }
}

void display() {
    if (isEmpty()) {
        printf("Queue is Empty\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main() {
    int choice, value, position;

    printf("Enter maximum size of queue: ");
    scanf("%d", &max);

    queue = (int*)malloc(max * sizeof(int));

    do {
        printf("\n--- Queue Menu ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Update\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                if (isEmpty()) {
                    printf("Queue is Empty\n");
                    break;
                }
                printf("Enter position to update (index): ");
                scanf("%d", &position);
                printf("Enter new value: ");
                scanf("%d", &value);
                update(position, value);
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 5);

    free(queue);
    return 0;
}
