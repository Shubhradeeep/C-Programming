1//wap to implement queue using array
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#define MAX 3
int queue[MAX],front=-1,rear=-1;
void enqueue();//fun. declaration
void display();//fun. declaration
void dequeue();//fun. declaration
void main()
{
  while(1)
  {
  printf("Press 1 for Insert\nPress 2 for Delete\nPress 3 for Display\n");
  int ch;
  printf("Enter the Choice = ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
          enqueue();//calling 1 3 1 3 1 3 1 3 2 3 2 3 2 3 2 3
          break;    
    case 2:
          dequeue();//calling
          break;   
    case 3:
          display();//calling
          break;   
    default:
           exit(0);
   } 
  }
  getch();
}
void enqueue()//fun. definition
{
  int x;
  printf("Enter the No. to be insert = ");
  scanf("%d",&x);
  if(rear==MAX -1)
  {
   printf("Queue Overflow , Insertion can't be possible\n");
   return;
  }
  else
  {
    if(front==-1)
     front=0;
    ++rear;
    queue[rear]=x;
    printf("Insertion Successful!!!!\n");
  }
}
void display()//func. definition
{
  int i;
  if(front==-1 || front>rear)
   printf("Queue is Empty\n");
  else
  {
    printf("\nQueue List = ");
    for(i=front;i<=rear;i++)
    {
      printf("%d ",queue[i]);
    }
    printf("\n");
  }
}
void dequeue()//definition
{
  if(front==-1 || front>rear)
  {
   printf("Queue Underflow , Deletion can't be possible\n");
   return;
  }
  else
  {
    int p;
    p=queue[front];
    printf("Deleted Element = %d\n",p);
    ++front;
  }   
}