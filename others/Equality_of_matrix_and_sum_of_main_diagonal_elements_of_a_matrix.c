#include<stdio.h>
int main()
{
    int row,col,equal,size;
    printf("Input the size of those Matrix:");
    scanf("%d",&size);
    int A[size][size];
    int B[size][size];
    printf("Input the element for Matrix A:\n");
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            scanf("%d",&A[row][col]);
        }
        printf("\n");

    }
    printf("Input the element for Matrix B:\n");
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
    equal=1;
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            if(A[row][col]!=B[row][col])
                {equal=0;
            break;}
        }
    }
    if(equal==1)
        printf("Both Matrix A and Matrix B are equal!\n");
    else
        printf("Both Matrix A and Matrix B are not equal!\n");
        int sum =0;
        int s=0;
        for(row=0;row<size;row++)
        {
            sum=sum+A[row][row];
            s=s+B[row][row];

        }
 printf("Sum of main diagonal element of matrix A: %d\n",sum);
 printf("Sum of main diagonal element of matrix B: %d\n",s);

    return 0;
}
