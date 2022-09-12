#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of this Array:");
    scanf("%d",&size);
    int source_arr[size];
    int dest_arr[size];
    int *source_ptr;
    int *dest_ptr;
    source_ptr=source_arr;
    dest_ptr=dest_arr;
    int *end_ptr;
    printf("Enter the element of this array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",(source_ptr+i));
    }
    end_ptr=&source_arr[size-1];
    while(source_ptr<=end_ptr)
    {
        *dest_ptr=*source_ptr;
        dest_ptr++;
        source_ptr++;
    }
    printf("Source Array:");
    printarray(source_arr,size);
    printf("\nCoying Array:");
    printarray(dest_arr,size);
    return 0;
}
    int printarray(int *arr,int size){
     for(int i=0;i<size;i++)
    {
        printf(" %d",(*arr+i));
    }

    }


