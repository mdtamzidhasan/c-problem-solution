#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    char str[MAX_SIZE];
    char rstr[MAX_SIZE];
    char *s=str;
    char *rs=rstr;
    int length=0;
    printf("Enter a string:");
    gets(str);
    while(*s){
        length++;
        s++;
    }
    printf("Length = %d\n",length);
    s--;
    while(length>=0)
    {
        *rs=*s;
        rs++;
        s--;
        length--;
    }
    *rs='\0';
    printf("Original string :%s\n",str);
    printf("Reverse String :%s",rstr);

    return 0;
}
