#include<stdio.h>
int main()
{
    int i,j,temp,max,min,tempmin;
    int arr[10];

    max=temp=tempmin=0;
    printf("Input array element:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    } min=arr[0];
    int *ptr1,*ptr2;
    ptr1=arr;
    ptr2=arr;
    for(i=1;i<10;i++)
    {
        if(max<=*ptr1)
            {
                temp=max;
        max=*ptr1;
        *ptr1=temp;}
        ptr1++;

    }
    printf("Max=%d\n",max);

    for(j=0;j<10;j++)
    {
        if(min>=*ptr2)
        {
            tempmin=*ptr2;
            *ptr2=min;
            min=tempmin;
        }
        ptr2++;
    }
    printf("Minimum=%d",min);
    return 0;
}
