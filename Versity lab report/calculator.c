#include<stdio.h>
int add()
  {
     int first,secound;
    printf("\n\nEnter your first digit:");
    scanf("%d",&first);
    printf("Enter your secound digit:");
    scanf("%d",&secound);
    int addition = first + secound;
    printf("\n\nRESULT :       %d + %d = %d",first,secound,addition);

  }
  int sub()
  {
     int first,secound;
    printf("\n\nEnter your first digit:");
    scanf("%d",&first);
    printf("Enter your secound digit:");
     scanf("%d",&secound);

    int subtrac = first - secound;
    printf("\n\nRESULT :       %d - %d = %d",first,secound,subtrac);

  }
  int multi()
  {
     int first,secound;
    printf("\n\nEnter your first digit:");
    scanf("%d",&first);
    printf("Enter your secound digit:");
     scanf("%d",&secound);

    int multipli = first * secound;
    printf("\n\nRESULT :       %d * %d = %d",first,secound,multipli);

  }
  int div()
  {
     int first,secound;
    printf("\n\nEnter your first digit:");
    scanf("%d",&first);
    printf("Enter your secound digit:");
     scanf("%d",&secound);

   float divide = first / secound;
    printf("\n\nRESULT :       %d / %d = %f",first,secound,divide);

  }

int main()
{
    int opt;
    printf("What type of calculation do you want?\n");
    printf("1.\tADDITION\n");
    printf("2.\tSUBTRACTION\n");
    printf("3.\tMULTIPLICATION\n");
    printf("4.\tDIVIDE\n");
    printf("Choose any option and enter any digit from(1 to 4)  :");
    scanf("%d",&opt);
    switch(opt)
    {
    case 1:add();
          break;
    case 2:sub();
    break;
    case 3:multi();
    break;
    case 4:div();
    break;
    default:
    printf("Wrong digit!!!");
    }





    getch();
}
