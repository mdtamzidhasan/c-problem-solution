#include<stdio.h>
int main()
{
    char ch[20];
    int length=0,i=0;
    printf("Please enter anything for calclating length:");
    gets(ch);
    while(ch[i]!='\0')
    {
        i++;
        length++;
    }
    printf("\n\nThe length of this string is %d\n\n",length);


    return 0;
}
