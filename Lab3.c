#include <stdio.h>
#include <stdlib.h>
#include<string.h>

 struct node {
        int Rollno;
        char name[20];
        float CPI;
        struct node *next;
    };

struct node *create(int e);
void display(struct node*);

int main () {
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);

    struct node *head;
    head = create(n);
    display(head);
}

struct node *create(int n) {
    int value;char q[20];float c;
    struct node *head, *p;

    printf ("Enter Roll no: ");
    scanf ("%d",&value);
    printf("Enter name of student: ");
    scanf("%s",q);
    printf("Enter CPI: ");
    scanf("%f",&c);

    head = (struct node *)malloc(sizeof(struct node));
    head -> Rollno = value;
    strcpy(head -> name , q);
    head -> CPI = c;
    head -> next = NULL;
    p=head;

    for(int i = 1; i<n; i++) {
        p ->next=(struct node *)malloc(sizeof(struct node));
        p=p->next;
        printf("Enter Roll no: ");
        scanf("%d",&p->Rollno);
        printf("Enter name of the student: ");
        scanf("%s",p->name);
        printf("Enter CPI: ");
        scanf("%f",&p->CPI);


        p->next=NULL;
    } return head;
}

void display (struct node*head) {
    struct node *p = head;
    while (p != NULL) {
        printf("\nRoll no: %d\n",p->Rollno);
        printf("Name: %s\n",p->name);
        printf("CPI: %.2f\n\n",p->CPI);
        p=p->next;
    }
}

