#include<stdio.h>
int lengthOfLastWord(char * s){
int length=strlen(s)-1;
    int startlen=1;
    while(length>=0 && s[length]==' ')
        length--;
    startlen=length;
    while(length>=0&&s[length]!=' ')
        length--;

    return startlen-length;
}

