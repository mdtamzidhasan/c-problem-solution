char findTheDifference(char * s, char * t){
    int sl=strlen(s);
    int tl=strlen(t);
  int sttr[26];
  int tttr[26];
 int index,i;
  char c;
  for(i=0;i<26;i++)
  {
      sttr[i]=0;
      tttr[i]=0;
  }
  for(i=0;i<sl;i++)
  {
      index=s[i]-'a';
      sttr[index]++;
  }
  for(i=0;i<tl;i++)
  {
      index=t[i]-'a';
      tttr[index]++;
  }
  for(i=0;i<26;i++)
  {
      if(sttr[i]!=tttr[i])
      {
          c=i + 'a';
          break;
      }
  }
  return c;
}
