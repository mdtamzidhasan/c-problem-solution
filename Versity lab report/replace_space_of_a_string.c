#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    char c;
    printf("Input the string: ");
    gets(str);
    printf("Input the special character:");
    scanf("%c",&c);
    int length=strlen(str);
    for(int i=0;i<length;i++)
    {
        if(str[i]==' ')
            str[i]=c;
    }
    printf("After replacing space with given special character:\n");
    printf("\t%s\n\n",str);


    return 0;
}
