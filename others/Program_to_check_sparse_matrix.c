#include<stdio.h>
int main()
{
   int r,c,sizer,sizec,total=0;
   printf("Enter the Matrix Size:\n");
   scanf("%d %d",&sizer,&sizec);
   int A[sizer][sizec];
   printf("Enter the element of this Matrix:\n");
   for(r=0;r<sizer;r++)
   {
       for(c=0;c<sizec;c++)
       {
           scanf("%d",&A[r][c]);
       }
       printf("\n");
   }
   for(r=0;r<sizer;r++)
   {
       for(c=0;c<sizec;c++)
       {
           if(A[r][c]==0)
            total++;
       }
   }
   if(total>=(r*c)/2){
     printf("This is a sparse Matrix!And this Matrix is :\n");
    for(r=0;r<sizer;r++)
    {
        for(c=0;c<sizec;c++)
        {
            printf("\t%d",A[r][c]);
        }
        printf("\n");

    }
   }

    else
        printf("This is not sparse Matrix!");





    return 0;
}
