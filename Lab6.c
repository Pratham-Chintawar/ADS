#include <stdio.h>
#include <ctype.h>
#include <string.h>
char stack[50];
int top = -1;
void infix(char * e);
void push(char x) {
    stack[++top] = x;
}

char pop() {
    if (top == -1)
        return -1;
    else
        return stack[top--];
}

int precedence(char x) {
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    if(x == '%' || x =='^')
        return 3;
    return 0;
}


int main() {
    char s[50];
    printf("Enter Infix: ");
    scanf("%s", s);
    printf("Postfix: ");
    infix(s);
    return 0;
}
void infix(char* exp) {
    char *e, x;
    e = exp;

    while (*e != '\0') {
        if (isalnum(*e)) {
            printf("%c ", *e);
        } else if (*e == '(') {
            push(*e);
        } else if (*e == ')') {
            while ((x = pop()) != '(') {
                printf("%c ", x);
            }
        } else {
            while (precedence(stack[top]) >= precedence(*e)) {
                printf("%c ", pop());
            }
            push(*e);
        }
        e++;
    }

    while (top != -1) {
        printf("%c ", pop());
    }
}