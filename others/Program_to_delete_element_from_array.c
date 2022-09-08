#include<stdio.h>
int main()
{
    int i,size,pos;
    printf("Input the array size:");
    scanf("%d",&size);
    int arr[size];
    printf("Input the element of this array:\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("Enter the element position to delete:");
    scanf("%d",&pos);
    if(pos<0||pos>size)
        printf("Invalid position!\nPlease enter position 1 to %d",size);
    else
    {
        for(i=pos-1;i<size-1;i++)
            arr[i]=arr[i+1];
        size--;
        printf("Array element after delete:");
        for(i=0;i<size;i++)
            printf("\t%d",arr[i]);
    }


    getch();
}
