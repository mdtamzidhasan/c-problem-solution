#include<stdio.h>
int main()
{
    char str1[50];
    char revstr[50];
    char *stptr=str1;
    char *rvptr=revstr;
       int i=-1;

    printf("Input the string:");
    scanf("%s",str1);

    while(*stptr){
        stptr++;
        i++;

    }
    while(i>=0)
    {
        stptr--;
        *rvptr = *stptr;
        rvptr++;
        --i;
    }
    *rvptr='\0';
    printf("reverse string: %s\n\n",revstr);


    return 0;
}

