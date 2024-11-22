#include<stdio.h>
int main()
{
    struct student
    {
        int roll;
        char name[30];
        float cpi;
    }s[50];
    int c,n,i,e=0,d;
    char ans;

    do{
    printf("\n1->Creating a Database\n2->Adding entry in Database\n3->Deleting an entry\n4->Display all students of Database\n5->Exit\nEnter your choice- ");
    scanf("%d",&c);

    switch(c)
    {
        case 1:
        {
            printf("Enter the number of students to be created- ");
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                printf("Enter roll number- ");
                scanf("%d",&s[i].roll);
                printf("Enter Name- ");
                scanf("%s",&s[i].name);
                printf("Enter CPI- ");
                scanf("%f",&s[i].cpi);                
            }
        
            printf("Database Created successfully\n");
            break;
        }

        case 2: 

            {
                printf("Enter roll no: ");
                scanf("%d", &s[n].roll);
                printf("Enter name: ");
                scanf("%s", s[n].name);
                printf("Enter CGPA: ");
                scanf("%f", &s[n].cpi);
                n++;
                break;
            }

       case 3: 
       {

                printf("Enter roll no of student to delete: ");
                scanf("%d", &d);
                for (int i = 0; i < n; i++) 
                {
                    if (s[i].roll == d)
                    {
                        for (int j = i; j < n+e-1; j++) 
                        {
                            s[j] = s[j + 1];
                        }
                        n=n-1;
                        break;
                    }
                }
                printf("Student Deleted Successfully");
                break;
       }

        case 4:
        {
        for(i=0;i<n+e;i++)
        {
            printf("Roll No.- %d",s[i].roll);
            printf("\nName- %s",s[i].name);
            printf("\nCPI- %.2f",s[i].cpi);
            printf("\n");
        }
        break;
        }

        default:
        break;
    }
    }while(c!=5);
}
