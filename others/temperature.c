
#include<stdio.h>
int main()
{
    int c,f,k,i;
    printf("What type of change you want?\n");
    printf("1.Celsius  to  Fahrenheit\n2.Celsius  to kelvin\n");
    printf("3.Fahrenheit to Celsius \n4.Fahrenheit to kelvin\n");
    printf("5.kelvin to Celsius \n6.Kelvin to  Fahrenheit\n\n");
    scanf("%d",&i);
    if(i==1)
    {
         printf("Enter the temperature in celcis to convert into ferhenheit=");
         scanf("%d",&c);
         f=(1.8*c)+32;
        printf("Celsius = %d     Fahrenheit = %d\n",c,f);
    }

    else if(i==2)
   {
       printf("Enter the temperature in Celsius to convert into Kelvin=\n");
       scanf("%d",&c);
       k=c+273;
       printf("Celsius = %d      Kelvin = %d\n",c,k);
   }
   else if(i==3)
   {
       printf("Enter the temperature in Fahrenheit to convert into Celsius =\n");
       scanf("%d",&f);
       c=(f-32)/1.8;
       printf("Fahrenheit = %d         Celsius = %d\n",f,c);
   }
   else if(i==4)
   {
      printf("Enter the temperature in Fahrenheit to convert into kelvin=\n");
      scanf("%d",&f);
      k=((f*5)+2297)/9;
       printf("Fahrenheit = %d         Kelvin = %d\n",f,k);

   }
   else if(i==5)
   {
      printf("Enter the temperature in kelvin to convert into  Celsius =\n");
      scanf("%d",&k);
      c=k-273;
      printf("kelvin = %d         Celsius = %d\n",k,c);
   }
   else if(i==6)
   {
       printf("Enter the temperature in  kelvin to convert into Fahrenheit=\n");
       scanf("%d",&k);
       f=((k*9)-2297)/5;
        printf("kelvin = %d        Fahrenheit = %d\n",k,c);
   }
   else
    printf("You not Enter the right digit");






    return 0;
}

