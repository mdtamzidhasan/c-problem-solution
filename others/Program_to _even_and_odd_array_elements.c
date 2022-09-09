#include<stdio.h>
int main()
{
    int size,i,evencount=0,oddcount=0;
    printf("Input the size of this array:");
    scanf("%d",&size);
    int arr[size];
    int evenarr[size],oddarr[size];
    printf("Input the element of this array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
           evenarr[evencount]=arr[i];
           evencount++;
        }
        else
        {
            oddarr[oddcount]=arr[i];
            oddcount++;

        }


    }

        printf("Even element:");
       for(i=0;i<evencount;i++)
                printf("\t%d",evenarr[i]);
                printf("\nOdd element:");
            for(i=0;i<oddcount;i++)
                printf("\t%d",oddarr[i]);


    return 0;
}
