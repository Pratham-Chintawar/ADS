#include <stdio.h>

int main() {
    int n,m,found;
    printf("Enter no of elements: ");
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d",&m);

    for(int i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            printf("Element found at index %d",i);
            found =1;
        }

      
    }
      
       if(found!=1)
       {
        printf("Not Found");
       }
return 0;

}

