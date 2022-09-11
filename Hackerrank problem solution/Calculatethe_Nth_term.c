#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

 int counter=3; int find_nth_term(int n, int a, int b, int c) {

if(n==1) return a;
if(n==2) return b;
if(n==3) return c;

int result = a+b+c;
a=b;
b=c;
c=result;
counter ++;

if(counter!=n){
return find_nth_term(n,  a,  b,  c);
}else{
    return result;
}
  //Write your code here.
}

int main() {
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}
