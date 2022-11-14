#include<stdio.h>
struct node{
int data;
struct node *next;
}*head=NULL;
void  insertionatbegining(int value)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));

   if(head==NULL)
   {
       newnode->data=value;
       newnode->next=NULL;
       head=newnode;

   }
   else
   {
    newnode->data=value;
    newnode->next=head;
    head=newnode;
   }

      printlinkedlist(head);

}
void  printlinkedlist(struct node *ptr){
while(ptr!=NULL)
{
    printf("%d->",ptr->data);
    ptr=ptr->next;
}
printf("NULL\n\n");
}
int main()
{
    //struct node *head;
    struct node *node1;
    struct node *node2;
    struct node *node3;
    struct node *node4;
    struct node *node5;

    node1=(struct node*)malloc(sizeof(struct node));
    node2=(struct node*)malloc(sizeof(struct node));
    node3=(struct node*)malloc(sizeof(struct node));
    node4=(struct node*)malloc(sizeof(struct node));
    node5=(struct node*)malloc(sizeof(struct node));

    node1->data = 1;
    node2->data = 2;
    node3->data = 3;
    node4->data = 4;
    node5->data = 5;

    node1->next=node2;
    node2->next=node3;
    node3->next=node4;
    node4->next=node5;
    node5->next=NULL;

    head=node1;
      printlinkedlist(head);
    int val;
    printf("\nEnter the value for insertion at the begining:");
    scanf("%d",&val);
    insertionatbegining(val);
    return 0;
}
