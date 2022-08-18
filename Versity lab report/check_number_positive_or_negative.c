#include<stdio.h>
int main()
{
    int number;
    printf("Enter any number:\t");
    scanf("%d",&number);
    if(number>0)
        printf("It is a positive number\n");
    else if(number<0)
        printf("It is a negative number\n");
    else
        printf("It is ZERO:neither positive nor negative\n");
    return 0;
}

