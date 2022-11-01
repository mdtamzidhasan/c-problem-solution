#include<stdio.h>
int main()

{  int size;
    printf("Input the size of this array:");
   scanf("%d",&size);
    int temp;
   int arr[size];

   printf("Input element:\n");
   for(int i=0;i<size;i++)
   {
       scanf("%d",&arr[i]);
   }

   for(int i=0;i<size;i++)
   {
       for(int j=i;j>=0;j--)
       {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }


       }


   }
   for(int i=0;i<size;i++)
   {
       printf(" %d",arr[i]);
   }

    return 0;
}
