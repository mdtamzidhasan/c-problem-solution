#include<stdio.h>
int strong;
int functionnumber(int tempnumber)
{
    int i=0,digit;
    while(tempnumber>0)
    {
        digit=tempnumber%10;

        int p=1;
        for(i=digit;i>0;i--)
        {
            p=p*i;


        }
        strong=strong+p;
          tempnumber=tempnumber/10;
    }
}
int main()
{
    int number,strongnumber,tempnumber;
    printf("Enter any number:");
    scanf("%d",&number);
    tempnumber=number;
    strongnumber=functionnumber(tempnumber);

    if(number==strong)
     printf("\n\nThis number is strong\n\n");
     else
        printf("\n\nThis number is not strong\n\n");




    return 0;
}
