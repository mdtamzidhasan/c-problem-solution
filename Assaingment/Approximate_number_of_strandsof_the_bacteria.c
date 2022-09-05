#include<stdio.h>
#include<math.h>
int main()
{
    float s1,h1,s2,h2,p,t,x,b,m;
    printf("Input first strand bacteria: ");
    scanf("%f",&s1);
    printf("Input second strand bacteria: ");
    scanf("%f",&s2);
    printf("\nInput first Hour:");
    scanf("%f",&h1);
    printf("Input second hour: ");
    scanf("%f",&h2);

    p = h2 - h1;
    b = s2/s1;

    if(p==2)
        m = sqrt(b);
    else if (p==3)
        m = sqrt(b);
    else if (p==4)
        m = pow(b,(0.25));
    else
        exit(0);

    x = s1 * pow(m,(t-1));

    printf("The Approximate number of strands of the bacteria orginally in the culture:%f",x);


    return 0;
}
