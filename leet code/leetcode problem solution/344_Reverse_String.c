

void reverseString(char* s, int sSize){
    int length,i;
    char temp;
    length=sSize-1;
    i=0;
    while(length>i){
        temp=s[i];
        s[i]=s[length];
        s[length]=temp;
        length--;
        i++;
    }




}
