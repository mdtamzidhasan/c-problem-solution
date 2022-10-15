#include<stdio.h>

int main(){
    int arr[10];
    int value;
    printf("Enter element for array:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array = ");
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter the search value:");
    scanf("%d",&value);
    for(int i=0;i<10;i++)
    {
        if(arr[i]==value)
        {
            printf("Index = %d",++i);

            break;
        }
        if(i==9&&arr[i+1]!=value)
        printf("sorry!Value is not correct.");
    }

    return 0;
}
