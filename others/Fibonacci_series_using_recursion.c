#include<stdio.h>
int fibbo(int n){

if(n==0)
    return 0;
else if(n==1)
    return 1;
    else
        return (fibbo(n-1)+fibbo(n-2));


}
int main()
{
     n,i=0,c;
    printf("Enter a number:");
    scanf("%d",&n);
    for(c=1;c<=n;c++)
    {
        printf(" %d",fibbo(i));
        i++;
    }



    return 0;
}

