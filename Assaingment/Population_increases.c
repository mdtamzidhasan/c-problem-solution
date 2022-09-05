#include<stdio.h>
#include<math.h>
int main()
{
    double p_t,population,percentage,k,t1,t2,p;
    printf("Input the number of population:");
    scanf("%lf",&population);
    printf("\nInput the percentage of increasing present population:");
    scanf("%lf",&percentage);
    printf("\nInput the present Years:");
    scanf("%lf",&t1);
    printf("Input the after years:");
    scanf("%lf",&t2);

    percentage = percentage + 100;
    percentage = percentage/100;

    p_t = log(percentage);
    k = p_t/t1;

    p = population * exp(k * t2);

    printf("\nThe population is: %.2lf\n\n",p);

    return 0;
}
