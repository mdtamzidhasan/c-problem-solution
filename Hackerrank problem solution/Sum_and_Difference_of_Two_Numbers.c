#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{ int a,b,sumin,diffin;
float c,d,sumf,difff;
scanf("%d %d",&a,&b);
scanf("%f %f",&c,&d);
sumin=a+b;
diffin=a-b;
sumf=c+d;
difff=c-d;
printf("%d %d\n",sumin,diffin);
printf("%.1f %.1f",sumf,difff);


    return 0;
}
