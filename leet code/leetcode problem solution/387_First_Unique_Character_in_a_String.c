int firstUniqChar(char * s){
    int g=strlen(s);
    int A[26]={0};
    for(int i=0;i<g;i++)
{
    A[s[i]-'a']++;
}
for(int i=0;i<g;i++)
{
    if(A[s[i]-'a']==1)
    return i;
}
return -1;
}
