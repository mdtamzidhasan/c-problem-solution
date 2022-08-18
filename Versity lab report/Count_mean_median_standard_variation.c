#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float *x,mean=0,median,var,sdv;
    int i,j,temp,n;
    printf("Please enter the number of enteries:");
    scanf("%d",&n);
    x=(float *)malloc(n*sizeof(float));
    printf("Enter your inputs:\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&x[i]);

    }
    //for mean
    for(i=0;i<n;i++)
    {
        mean=mean+x[i];
    }
    mean=mean/n;
    //for standard variation
    for(i=0;i<n;i++)
    {
        var=var+pow((x[i]-mean),2);
    }
    var=var/n;
    sdv=sqrt(var);
    //for median
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if(x[i]==x[j])
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
    if((n+1)%2==0)
    {
        median=x[((n+1)/2)-1];

    }
    else
    median=(x[((n+1)/2)-1]+x[((n+2)/2)-1])/2;
    printf("\n\nMean  =  %.2f\n",mean);
    printf("Median =  %.2f\n",median);
    printf("Standard variation =  %.2f\n\n",sdv);



    return 0;
}
