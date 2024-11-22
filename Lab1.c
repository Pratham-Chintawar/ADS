// #include <stdio.h>

// int main()
// {
//     int arr[100],n,i,c=0;
//     printf("Enter the size of array- ");
//     scanf("%d",&n);
//     if(n<100)
//     {
//         printf("Enter the Elements of an array- ");
//         for(i=0;i<n;i++)
//         {
//             scanf("%d",&arr[i]);
//         }
//     }
//     else
//     {
//         printf("Enter the correct value");
//     }

//     for (int i = 1; i < n; i++)
//     {
//         int key=arr[i];
//         int flag = 0;
//         int j;
//         for(j=i-1;j>=0;j--)
//         {
//             if (key < arr[j])
//             {
//                 int temp = arr[j];
//                 arr[j] = key;
//                 key = temp;
//                 flag = 1;
//                 c++;
//             }
//         }
//         if (flag == 0) {
//             break;
//         }
//     }

//     printf("Sorted array:- ");
//     for ( i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     printf("The number of comparisons made are- %d",c);

// }

#include <stdio.h>

int main()
{
    int arr[100], n, i, c = 0;
    printf("Enter The Number of Elements- ");
    scanf("%d", &n);
    printf("Enter the array- ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            c++;
        }
        arr[j + 1] = key;
    }

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    printf("The number of comparisons made are- %d", c);

    return 0;
}