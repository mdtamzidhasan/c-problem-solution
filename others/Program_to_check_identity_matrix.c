#include<stdio.h>
int main()
{
    int sizer,sizec,i,j;
    printf("Enter the size of this matrix:\n");
    scanf("%d %d",&sizer,&sizec);
    int A[sizer][sizec];
    int B[sizer][sizec];
    printf("Enter the element of this matrix:\n");
    for(i=0;i<sizer;i++)
    {
        for(j=0;j<sizec;j++)
        {
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

int identy=1;
for(i=0;i<sizer;i++)
{
 for(j=0;j<sizec;j++)
 {
     if(i==j&&A[i][j]!=1)
        identy=0;
     else if(i!=j && A[i][j]!=0)
     identy =0;


 }
}
if(identy==1){
       printf("This is an idenity Matrix! And this Matrix is:\n");
for(i=0;i<sizer;i++)
{
    for(j=0;j<sizec;j++)
    {
        printf("\t%d",A[i][j]);


    }
    printf("\n");
}
}

else
    printf("This is not an identity Matrix!");
return 0;
}
