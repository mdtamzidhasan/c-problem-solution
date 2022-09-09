#include<stdio.h>
int main()
{
    int i,j,n;
    int arr[10];
    printf("Input the array element:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("Input number of times to left rotate:");
    scanf("%d",&n);
    printf("Before rotating the array:");
    for(i=0;i<10;i++)
        printf("\t%d",arr[i]);
     printf("\n\nAfter left rotating the array:");
    for(i=n;i<10;i++)
        printf("\t%d",arr[i]);
    for(i=0;i<n;i++)
        printf("\t%d",arr[i]);
    printf("\nAfter right rotating the array:");
    for(i=10-n;i<10;i++)
        printf("\t%d",arr[i]);
    for(i=0;i<10-n;i++)
    printf("\t%d",arr[i]);



    getch();
}
