#include<stdio.h>
int main()
{
    int i,j,size,temp;
    printf("Input the size of this array:");
    scanf("%d",&size);
    int arr[size];
    printf("Input the array element:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
           if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
    }
    printf("Ascending Order:");
    for(i=0;i<size;i++)
        printf("\t%d",arr[i]);
        for(i=0;i<size;i++)
        {
            for(j=i+1;j<size;j++)
            {
                if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            }
        }
        printf("\nDecending Order:");
        for(i=0;i<size;i++)
            printf("\t%d",arr[i]);



    return 0;
}
