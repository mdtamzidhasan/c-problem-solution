#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  char string[1000];
  char number[10]={'0','1','2','3','4','5','6','7','8','9'};
  scanf("%s",string);
  int a[10]={0,0,0,0,0,0,0,0,0,0};
  int i=0;
  while(i<strlen(string))
  {
      if(string[i]==number[0])
      a[0]+=1;
      else if(string[i]==number[1])
      a[1]+=1;
      else if(string[i]==number[2])
      a[2]+=1;
      else if(string[i]==number[3])
      a[3]+=1;
      else if(string[i]==number[4])
      a[4]+=1;
      else if(string[i]==number[5])
      a[5]+=1;
      else if(string[i]==number[6])
      a[6]+=1;
      else if(string[i]==number[7])
      a[7]+=1;
      else if(string[i]==number[8])
      a[8]+=1;
      else if(string[i]==number[9])
      a[9]+=1;
      i++;
  }
    for(int i=0;i<=9;i++)
    printf("%d ",a[i]);
    return 0;
}

