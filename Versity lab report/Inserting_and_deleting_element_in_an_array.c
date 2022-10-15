#include<stdio.h>
int main()
{
    int arr[10];
    printf("Enter element for array:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array = ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    int index,value,inde;
    printf("\nEnter the inserting index:");
    scanf("%d",&index);
    printf("\nEnter the inserting value:");
    scanf("%d",&value);
    for(int i=5;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=value;
     printf("Array after inserting= ");
    for(int i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter the deleting index:");
    scanf("%d",&inde);
     for(int i=inde;i<6;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[5]=NULL;
      printf("Array after deleting= ");
    for(int i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
