#include<stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int size,i;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter value for array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("Reverse of array:");
    for(i=size-1;i>=0;i--)
    {
        printf("%d  ",arr[i]);
    }




    return 0;
}

