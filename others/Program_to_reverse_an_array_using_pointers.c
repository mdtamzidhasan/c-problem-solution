#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
   int arr[size];
   int *a=arr;
   int i,j,temp=0;
   printf("Enter the element of this array:\n");
   for(i=0;i<size;i++)
   {
       scanf("%d",a+i);

   }
   printf("Before Reverse:");
   for(i=0;i<size;i++)
   {
       printf(" %d",*(a+i));

   }
   for(i=0,j=size-1;i<j;i++,j--)
   {
       temp=*(a+i);
       *(a+i)=*(a+j);
       *(a+j)=temp;
   }
   printf("\nAfter reverse:");
   for(i=0;i<size;i++)
   {
       printf(" %d",*(a+i));

   }

    return 0;
}
