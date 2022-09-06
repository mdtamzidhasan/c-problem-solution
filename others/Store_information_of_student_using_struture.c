#include<stdio.h>
int main()
{
    struct student{
    char name [50];
    int roll;
    int mark;

    } s[5];
    printf("Input Information:\n");
    for(int i=0;i<5;i++){
       printf("For person number %d\n",i+1);
        printf("Enter name:");
    scanf("%s",s[i].name);
    printf("enter roll:");
    scanf("%d",&s[i].roll);
    printf("Enter the mark:");
    scanf("%d",&s[i].mark);
printf("\n");
    }

for(int i=0;i<5;i++){
        printf("Information of person number %d\n",i+1);

      printf("Name : %s\n",s[i].name);
    printf("Roll :  %d\n",s[i].roll);
    printf("Mark : %d\n",s[i].mark);
    printf("\n");
}



    return 0;
}
