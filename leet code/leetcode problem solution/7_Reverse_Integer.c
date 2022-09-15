#include<stdio.h>
#include<limits.h>

int reverse(int x){
    long long n=0,number=0;
    while(x!=0)
    {
        number=x%10;
        n=(n*10)+number;
        x=x/10;
    }
if(n>INT_MAX||n<INT_MIN)
    return 0;
    else
        return n;

}
int main()
{
    int x,result;
    scanf("%d",&x);
    result=reverse(x);
    printf("%d",result);

}
