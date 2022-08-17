#include<stdio.h>

int add(int tempnumber)
{
    if(tempnumber==0)
        return 0;
    else
    return (tempnumber%10)+add(tempnumber/10);
}
int main()
{
    int number,tempnumber,sum;
    printf("Please enter any number:");
    scanf("%d",&number);
    tempnumber=number;
    sum=add(tempnumber);

    printf("\n\nSum of all digit = %d\n\n",sum);


    return 0;
}
