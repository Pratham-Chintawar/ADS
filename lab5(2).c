#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int data;
    struct Node* next;
} Node;


Node* top = NULL;

void push(int data) {

    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
  
    new_node->data = data;
    new_node->next = top;
    
    top = new_node;
    printf("Successfully pushed %d\n", data);
}

int pop() {
    if (top == NULL) {
        printf("Stack is already empty\n");
        return -1; 
    }
    
    Node* temp = top;
    int popped_data = temp->data;
 
    top = top->next;

    free(temp);
    printf("Successfully popped %d\n", popped_data);
    return popped_data;
}

void print_stack() {
    if (top == NULL) {
        printf("Stack is empty\n");
    } else {
        Node* current = top;
        while (current != NULL) {
            printf("%d ", current->data);
            current = current->next;
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
               
                while (top != NULL) {
                    pop();
                }
                return 0;
        }
    }
}
