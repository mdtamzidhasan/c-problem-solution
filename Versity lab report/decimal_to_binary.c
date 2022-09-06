#include<stdio.h>
long long temdecimal;
long long number(long long temdecimal);
int main()
{
    long long decimal,binarynumber;
    printf("Enter any decimal number:");
    scanf("%lld",&decimal);

    temdecimal=decimal;
    binarynumber=number(temdecimal);

    printf("\n\nDecimal number     =   %lld\n",decimal);
    printf("Binary number      =   %lld\n\n",binarynumber);

    return 0;
}
long long number(long long temdecimal)
{
    long  long binary=0;
    int reminder,place=1;

     while(temdecimal>0)
    {
        reminder=temdecimal%2;
        binary=(reminder*place)+binary;
        temdecimal=temdecimal/2;
        place=place*10;
    }

    return binary;

}

