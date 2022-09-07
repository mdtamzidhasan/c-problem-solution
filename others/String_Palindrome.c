#include<stdio.h>
int main()
{
    char str[50];
    char restr[50];
    int length=0,flag=0,i;
    printf("Input a string:");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {

        length++;
    }

    for(i=length-1;i>=0;i--)
    {
       restr[length-i-1]=str[i];
    }
    for(flag=1,i=0;i<length;i++)
    {
        if(restr[i]!=str[i])
            flag=0;
    }
    if(flag==1)
        printf("Its Palindrome");
    else
        printf("Its not Palindrome");



    return 0;
}
