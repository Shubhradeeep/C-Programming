#include<stdio.h>
#include<conio.h>
#define MAX 3
int cqueue_arr[MAX];
int front = -1;
int rear = -1;
int main()
{
  int choice,item;
  do
  {
     printf("1.Insert\n");
     printf("2.Delete\n");
     printf("3.Display\n");
     printf("4.Quit\n");
     printf("Enter your choice : ");
     scanf("%d",&choice);//choice=1 3 1 3 1 3 1 2 3 2 3 2 3 2 1
     switch(choice)
     {
       case 1 :
            printf("Input the element for insertion in queue : ");
            scanf("%d", &item);//item=40
            insert(item);//calling 
            break;
       case 2 :
            del();//calling
            break;
       case 3:
            display();//calling
            break;
       case 4:
           exit(0);
       default:
            printf("Wrong choice\n");
     }
   }while(choice!=4);//3!=4
  getch();
  return 0;
}
void insert(int item)//item=40
{
   if((front == 0 && rear == MAX-1) || (front == rear+1))
   {
      printf("Queue Overflow \n");
      return;
   }
   if (front == -1)  /*If queue is empty */
   {
     front = 0;
     rear = 0;
   }
   else
   {
     if(rear == MAX-1)	/*rear is at last position of queue */
       rear = 0;
     else
       rear = rear+1;//2
   }
   cqueue_arr[rear] = item ;//cqueue_arr[2]=30
}
void del()
{
  if (front == -1)
  {
    printf("Queue Underflow\n");
    return ;
  }
  printf("Element deleted from queue is : %d\n",cqueue_arr[front]);
  if(front == rear) /* queue has only one element */ //circular
  {
    front = -1;
    rear=-1;
  }
  else
  {	
    if(front == MAX-1)//circular queue
      front = 0;//circular queue
    else
      front = front+1;//2
  }
}
void display()
{
  int front_pos = front,rear_pos = rear;
  if(front == -1)
  {
    printf("Queue is empty\n");
    return;
  }
  printf("Queue elements :\n");
  if( front_pos <= rear_pos )//2<=2
  while(front_pos <= rear_pos)//2<=2
  {
    printf("%d ",cqueue_arr[front_pos]);//30
    front_pos++;//3
  }
  else
  {
    while(front_pos <= MAX-1)
    {
      printf("%d ",cqueue_arr[front_pos]);
      front_pos++;
    }
    front_pos = 0;
    while(front_pos <= rear_pos)
    {
      printf("%d ",cqueue_arr[front_pos]);
      front_pos++;
    }
  }
   printf("\n");
}
