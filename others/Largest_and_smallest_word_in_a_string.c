#include<stdio.h>
int main()
{
    char str[100],nstr[10][20];
    int i,j=0,k=0,m=0,n=0,max,min;
    printf("Input a line of string:");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            nstr[k][j]='\0';
            k++;
            j=0;
        }
        else
        {
            nstr[k][j]=str[i];
            j++;
        }
    }
    nstr[k][j]='\0';
    max=strlen(nstr[0]);
    min=strlen(nstr[0]);
    for(i=0;i<=k;i++)
    {
        if(max<strlen(nstr[i]))
            m=i;
        if(min>strlen(nstr[i]))
        n=i;
    }
    printf("\nMax word :%s\n\nMin word : %s",nstr[m],nstr[n]);



    return 0;
}
