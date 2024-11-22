#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Global variables for stack
int stack[MAX_SIZE];
int top = -1;

void push(int data) {
    if (top + 1 == MAX_SIZE) {
        printf("Stack is Full\n");
    } else {
        top++;
        stack[top] = data;
    }
}

int pop() {
    int popped;
    if (top == -1) {
        printf("Stack is already empty\n");
        return -1;
    } else {
        popped = stack[top];
        top--;
        printf("Successfully popped %d\n", popped);
    }
    return popped;
}

void print_stack() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    while (1) {
        printf("1) push\n");
        printf("2) pop\n");
        printf("3) print_stack\n");
        printf("4) Exit\n");
        printf("Enter what do you want to do- ");
        int option;
        scanf("%d", &option);
        int data;

        switch (option) {
            case 1:
                printf("Enter element you want to push- ");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                print_stack();
                break;
            case 4:
                return 0;
        }
    }
}
