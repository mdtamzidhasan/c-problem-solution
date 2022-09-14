#include<stdio.h>
int main()
{
    int size,temp;;
    printf("Enter the size of this array:");
    scanf("%d",&size);
    int arr[size];
    int *p=arr;
    printf("Enter the element of this array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",p+i);
    }
    printf("\nBefore swapping:");
    for(int i=0;i<size;i++)
    {
        printf(" %d",*(p+i));
    }
    temp=*p;
    *p=*(p+size-1);
    *(p+size-1)=temp;
    printf("\nAfter swapping:");
    for(int i=0;i<size;i++)
    {
        printf(" %d",*(p+i));
    }





    return 0;
}
