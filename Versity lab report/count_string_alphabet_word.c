#include<stdio.h>
int main ()
{



    char str[100],ch;
    int i,alphabet,digit,others;
    printf("Please write something :");
    gets(str);
    i=alphabet=digit=others=0;
    while(str[i]!='\0')
    {
        ch=str[i];

        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
            alphabet++;
        else if(ch>='0' && ch<='9')
            digit++;
        else
            others++;
        i++;
    }
    printf("\n\nTotal number of Alphabet = %d\n",alphabet);
    printf("Total number of digit = %d\n",digit);
    printf("Total number of special character = %d\n",others);


    return 0;
}
