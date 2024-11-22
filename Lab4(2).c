#include<stdio.h>
int main()
{
    int n,m,a[n],found;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d",&m);

    int lb=0, ub=n-1;

    while (lb<ub)
    {
        int mid= (lb+ub)/2;
        if (a[mid]==m)
        {
            printf("Element found at index %d",mid);
            found=1;
            break;
        }

        else if(a[mid]>m)
        {
            ub=mid-1;
        }

        else
        {
            lb=mid+1;
        }
    }

    if(found!=1)
    printf("Not Found");
    
}