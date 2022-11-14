#include<stdio.h>
int main()
{
    int a[2][2];
    int b[2][2];
    int r[2][2];
    printf("Input value for matrix a:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("Input value for matrix b:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }


     printf("matrix a:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
     printf("matrix b:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf(" %d",b[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
         r[i][j]=(a[i][j]*b[i][j])+(a[i][j+1]*b[i+1][j])

        }
    }


    return 0;
}
