#include<stdio.h>
//#define MAX_SIZE 100
int main()
{
    int i,size,num,pos;

    printf("Input the size of the array:");
    scanf("%d",&size);
    int arr[size];
    printf("Input the element of this array:\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("Enter element to insert:");
    scanf("%d",&num);
    printf("Enter the element position:");
    scanf("%d",&pos);
    if(pos>size+1 || pos<=0)
        printf("Invalid position!\nPlease enter the position of 1 to %d",&size);
    else
    {
        for(i=size;i>=pos;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[pos-1]=num;
        size++;

    printf("Array element after insertion:");
    for(i=0;i<size;i++)
    {
        printf("\t%d",arr[i]);

    }
  }


    return 0;
}
