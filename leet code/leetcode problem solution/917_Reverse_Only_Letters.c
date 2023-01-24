char * reverseOnlyLetters(char * s){

    int length=strlen(s);
     char simplerev[length];
    char revS[length];
    int j=0;

    for(int i=0;i<length;i++)
    {
        revS[i]=s[i];
    }
    for(int i=0;i<length;i++)
    {
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
        {simplerev[j]=s[i];
        j++;}
    }

       for(int i=0;i<length;i++)
    {
        if((revS[i]>='a'&&revS[i]<='z')||(revS[i]>='A'&&revS[i]<='Z'))
        {s[i]=simplerev[j-1];
        j--;}
    }
return s;
}
