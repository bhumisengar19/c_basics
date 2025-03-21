#include <stdio.h>
#include <stdlib.h>

#define MAX 100 

int stack[MAX], top = -1; 

void push() {
    int value;
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push more elements.\n");
        return;
    }
    printf("Enter a value to be pushed: ");
    scanf("%d", &value);
    stack[++top] = value;
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow! No elements to pop.\n");
        return;
    }
    printf("The popped element is %d\n", stack[top--]);
}

void topElement() {
    if (top == -1) {
        printf("Stack is empty! No top element.\n");
        return;
    }
    printf("The top element is %d\n", stack[top]);
}

void display() {
    if (top == -1) {
        printf("Stack is empty!\n");
        return;
    }
    printf("The elements in STACK\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}

int main() {
    int choice, size;

    printf("Enter the size of STACK[MAX=100]: ");
    scanf("%d", &size);

    if (size > MAX || size <= 0) {
        printf("Invalid stack size! Please enter a value between 1 and 100.\n");
        return 1;
    }

    printf("\n STACK OPERATIONS USING ARRAY\n");
    printf(" 1.PUSH\n 2.POP\n 3.TOP\n 4.DISPLAY\n 5.EXIT\n");

    while (1) {
        printf("Enter the Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                topElement();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("EXIT\n");
                exit(0);
            default:
                printf("Invalid Choice!\n");
        }
    }
    return 0;
}
