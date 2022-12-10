bool checkRecord(char * s){
    int a=strlen(s);
    int absent=0;
    int late=0;
    char A,L;
    for(int i=0;i<a;i++)
    {
        if(s[i]=='A')
        {
            absent++;
        }
        if(s[i]=='L'&&s[i+1]=='L'&&s[i+2]=='L')
        late++;
    }
    if(absent>=2||late>=1)
    return false;
    else
    return true;

}
