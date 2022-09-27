#include<stdio.h>
#include<stdlib.h>

struct Node
{
   int data;
   struct Node *next;
   struct Node *prev;
};
struct Node *head,*temp,*newnode;
int x,i,pos,count=0;

void creat(int);
void traverseforward();
void traversebackward();
void insertatbeg();
void insertatend();
void insertatspecific();
void deleteatbeg();
void deleteatend();
void deleteatspecific();
void main()
{
   int ch,n;
   while(1)
   {
       printf("\nEnter 1 to creat\nEnter 2 to traverse forward\nEnter 3 to traverse backward\nEnter 4 to insert at beg\nEnter 5 to insert at end\nEnter 6 to insert at specific\nEnter 7 to delete at beg\nEnter 8 to delete at end\nEnter 9 to delete at specific\n");
       printf("Enter your choice: ");
       scanf("%d",&ch);
       switch (ch)
       {
       case 1:
           printf("Enter the range: ");
           scanf("%d",&n);
           creat(n);
           break;
       case 2:
           traverseforward();
           break;
        case 3:
           traversebackward();
           break;

       case 4:
           insertatbeg();
           break;
        case 5:
           insertatend();
           break;
        case 6:
           insertatspecific();
           break;
        case 7:
           deleteatbeg();
           break;
        case 8:
           deleteatend();
           break;
        case 9:
           deleteatspecific();
           break;

       default:
            exit(0);
           break;
       }
   }
}
void creat(int n)
{
  head=(struct Node*)malloc(sizeof(struct Node));
  if(head==NULL)
  {
      printf("Memory is full");
  }
  else
  {
      printf("Enetr the data: ");
      scanf("%d",&x);
      head->data=x;
      head->next=NULL;
      head->prev=NULL;
      temp=head;
      for(i=2;i<=n;i++)
     {
       newnode=(struct Node*)malloc(sizeof(struct Node));
       printf("Enetr the data: ");
       scanf("%d",&x);
       newnode->data=x;
       newnode->next=NULL;
       newnode->prev=temp;
       temp->next=newnode;
       temp=newnode;
     }

  }


}
void traverseforward()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("Data: %d Adress: %u\n",temp->data,temp);
        temp=temp->next;
    }


}
void traversebackward()
{
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    while(temp!=NULL)
    {
     printf("Data: %d Adress: %u\n",temp->data,temp);
     temp=temp->prev;   
    }

}
void insertatbeg()
{
    newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enetr the data: ");
    scanf("%d",&x);
    newnode->data=x;
    newnode->prev=NULL;
    newnode->next=head;
    head=newnode;
}
void insertatend()
{
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enetr the data: ");
    scanf("%d",&x);
    newnode->data=x;
    newnode->next=NULL;
    newnode->prev=temp;
    temp->next=newnode;

}
void insertatspecific()
{   
    struct Node *s;
    printf("Enter the position: ");
    scanf("%d",&pos);
    temp=head;
    if(pos==1)
    {
      insertatbeg();
    }
    else
    {
       for(i=1;i<pos;i++)
       {
           s=temp;
           temp=temp->next;
       }
       newnode=(struct Node*)malloc(sizeof(struct Node));
       printf("Enetr the data: ");
       scanf("%d",&x);
       newnode->data=x;
       newnode->next=temp;
       newnode->prev=s;
       s->next=newnode;
       temp->prev=newnode;
    }

}
void deleteatbeg()
{
  struct Node *s;
  s=head;
  head=head->next;
  free(s);
  head->prev=NULL;
}
void deleteatend()
{
    struct Node *s;
    temp=head;
    while(temp->next!=NULL)
    {
        s=temp;
        temp=temp->next;
    }
    free(temp);
    s->next=NULL;

}
void deleteatspecific()
{
    struct Node *a,*b;
    printf("Enter the position: ");
    scanf("%d",&pos);
    temp=head;
    for(i=1;i<pos;i++)
    {
        a=temp;
        temp=temp->next;
    }
    b=temp->next;
    free(temp);
    a->next=b;
    b->prev=a;

}
