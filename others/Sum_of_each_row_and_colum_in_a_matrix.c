#include<stdio.h>
int main()
{
    int size,i,j,c,sum=0;
    printf("Enter the size of the matrix:");
    scanf("%d",&size);
    int A[size][size];
    int a[size];
    int b[size];
    printf("Enter the element for this matrix:\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf(" %d",&A[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<size;i++)
    {
        sum=0;
        c=0;
        for(j=0;j<size;j++)
        {
            sum+=A[i][j];
            c+=A[j][i];
            printf(" %d",A[i][j]);
        }
        printf("\n");
        a[i]=sum;
        b[i]=c;
    }
    printf("ROW TOTAL ");
    for(i=0;i<size;i++)
    {
        printf(" %d",a[i]);
    }
printf("\nColoum ToTal ");
for(i=0;i<size;i++)
{
    printf(" %d",b[i]);
}

    return 0;
}
