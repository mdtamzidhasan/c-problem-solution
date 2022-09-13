#include<stdio.h>
int main()
{
    struct structure{
    char  name[20];
    int id[10];
    float mark;


    }person1,person2;
    printf("Enter name for person 1:");
    gets(person1.name);
    printf("Enter name for person 2:");
    gets(person2.name);
    printf("Enter ID for person 1:\n");
    for(int i=0;i<10;i++){
        scanf("%d",&person1.id[i]);
    }

    printf("Enter ID for person 2:\n");
    for(int i=0;i<10;i++)
    {  scanf("%d",&person2.id[i]);

    }

    printf("Enter mark for person 1:");
    scanf("%f",&person1.mark);
    printf("Enter mark for person 2:");
    scanf("%f",&person2.mark);

    printf("\nInformation for first person:\n");
    printf("Name : %s\n",person1.name);
    printf("ID : ");
    for(int i=0;i<10;i++)
    {
         printf("%d",person1.id[i]);
    }

    printf("\nMark : %.2f\n",person1.mark);
    printf("\nInformation for second person:\n");
    printf("Name : %s\n",person2.name);
    printf("ID : ");
    for(int i=0;i<10;i++)
    {
        printf("%d",person2.id[i]);

    }

    printf("\nMark : %.2f\n",person2.mark);



    return 0;
}
