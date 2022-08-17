
#include<stdio.h>
#define MAX_ROWS 3
#define MAX_COLS 3
int main()
{
    int A[MAX_ROWS][MAX_COLS];
    int B[MAX_COLS][MAX_ROWS];
    int i,j;
    printf("Enter element for matrix:\n");
    for(i=0;i<MAX_ROWS;i++)
    {
        for(j=0;j<MAX_COLS;j++)
        {
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<MAX_ROWS;i++)
    {
        for(j=0;j<MAX_COLS;j++)
        {
           B[j][i]=A[i][j];
        }
    }
    printf("Orginal Matrix:\n");
    for(i=0;i<MAX_ROWS;i++)
    {
        for(j=0;j<MAX_COLS;j++)
        {
            printf("%d  ",A[i][j]);
        }
        printf("\n");

    }
    printf("Transpose Matrix:\n");
    for(i=0;i<MAX_ROWS;i++)
    {
        for(j=0;j<MAX_COLS;j++)

        {
           printf("%d  ",B[i][j]);
        }
        printf("\n");
    }




    return 0;
}
