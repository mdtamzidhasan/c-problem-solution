#include<stdio.h>
int main()
{
    char str[100],sstr[50];
    int n,p,c=0;
    printf("Input the strinng:");
    gets(str);
    printf("\n\nInput the position to start extraction:");
    scanf("%d",&p);
    printf("\nInput the length of extraction: ");
    scanf("%d",&n);
    while(c<n)
    {
        sstr[c]=str[p+c-1];
        c++;
    }
    sstr[c]='\0';
    printf("\nThe substring is : %s",sstr);

    return 0;
}
