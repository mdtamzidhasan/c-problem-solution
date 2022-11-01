#include<stdio.h>
int main()
{
    int row,col,i,sum,aSize,bSize;
    printf("Input the size for matrix A:");
    scanf("%d",&aSize);
    printf("Input the size for matrix B:");
    scanf("%d",&bSize);
    int A[aSize][aSize];
    int B[bSize][bSize];
    int C[aSize][aSize];
    if(aSize==bSize){

        printf("Input element for matrix A:\n");
    for(row=0;row<aSize;row++)
    {
        for(col=0;col<aSize;col++)
        {
            scanf("%d",&A[row][col]);
        }
        printf("\n");
    }
    printf("Input element for matrix B:\n");
    for(row=0;row<bSize;row++)
    {
        for(col=0;col<bSize;col++)
        {
            scanf("%d",&B[row][col]);
        }
        printf("\n");
    }
    printf("Print Matrix A:\n");
    for(row=0;row<aSize;row++)
    {
        for(col=0;col<aSize;col++)
        {
            printf("\t%d",A[row][col]);
        }
        printf("\n");
    }
    printf("Print Matrix B:\n");
    for(row=0;row<bSize;row++)
    {
        for(col=0;col<bSize;col++)
        {
            printf("\t%d",B[row][col]);
        }
        printf("\n");
    }
    //Mutltiplication
    for(row=0;row<aSize;row++)
    {
        for(col=0;col<bSize;col++)
        {
            sum=0;
            for(i=0;i<aSize;i++)
            {
              sum+=A[row][i]*B[i][col];
            }
            C[row][col]=sum;
        }
    }
    printf("Matrix after multipling:\n");
       for(row=0;row<aSize;row++)
       {
           for(col=0;col<aSize;col++)
           {
               printf("\t%d",C[row][col]);
           }
           printf("\n");
       }
    }
    else
        printf("Sorry");


    return 0;
}
