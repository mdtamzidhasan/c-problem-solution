 #include<stdio.h>
 int main()
 {
     int c,f;

     printf("Enter the temperature in celcis to convert into ferhenheit=");
         scanf("%d",&c);
         f=(1.8*c)+32;
        printf("Celsius = %d     Fahrenheit = %d\n",c,f);

    return 0;
 }
