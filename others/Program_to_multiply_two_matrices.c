#include<stdio.h>
int main()
{
    int row,col,i,sum,size;
    printf("Input the matrix size:");
    scanf("%d",&size);
    int A[size][size];
    int B[size][size];
    int C[size][size];
    printf("Input element for matrix A:\n");
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            scanf("%d",&A[row][col]);
        }
        printf("\n");
    }
    printf("Input element for matrix B:\n");
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            scanf("%d",&B[row][col]);
        }
        printf("\n");
    }
    printf("Print Matrix A:\n");
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            printf("\t%d",A[row][col]);
        }
        printf("\n");
    }
    printf("Print Matrix B:\n");
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            printf("\t%d",B[row][col]);
        }
        printf("\n");
    }
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            sum=0;
            for(i=0;i<size;i++)
            {
              sum+=A[row][i]*B[i][col];
            }
            C[row][col]=sum;
        }
    }
    printf("Matrix after multipling:\n");
       for(row=0;row<size;row++)
       {
           for(col=0;col<size;col++)
           {
               printf("\t%d",C[row][col]);
           }
           printf("\n");
       }

    return 0;
}
