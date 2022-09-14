#include<stdio.h>
int r(int n)
{
    if(n>0)
        return (n*n*n)*(r(n-1));
    else
        return 1;
}
int re(int n)
{
    if(n>0)
        return (2*n)+(re(n-1));

    else
        return 0;
}
int main()
{
    int n,result;
    printf("Enter the number:");
    scanf("%d",&n);
    result=re(n);
    int res=r(n);

    printf("%d\n",result);
    printf("%d",res);

    return 0;
}
