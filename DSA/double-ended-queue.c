#define size 5    
#include <stdio.h>
#include <stdlib.h>  
int deque[size];  
int f=-1, r=-1;  
//  enqueue_front function will insert the value from the front  
void enqueue_front(int x)  
{  
    if((f==0 && r==size-1) || (f==r+1))  
    {  
        printf("deque is full");  
    }  
    else if((f==-1) && (r==-1))  
    {  
        f=r=0;  
        deque[f]=x;  
    }  
    else if(f==0)  
    {  
        f=size-1;  
        deque[f]=x;  
    }  
    else  
    {  
        f=f-1;  
        deque[f]=x;  
    }  
}  
  
// enqueue_rear function will insert the value from the rear  
void enqueue_rear(int x)  
{  
    if((f==0 && r==size-1) || (f==r+1))  
    {  
        printf("deque is full");  
    }  
    else if((f==-1) && (r==-1))  
    {  
        r=0;  
        deque[r]=x;  
    }  
    else if(r==size-1)  
    {  
        r=0;  
        deque[r]=x;  
    }  
    else  
    {  
        r++;  
        deque[r]=x;  
    }  
  
}    
// dequeue_front() function deletes the element from the front  
void dequeue_front()  
{  
    if((f==-1) && (r==-1))  
    {  
        printf("Deque is empty");  
    }  
    else if(f==r)  
    {  
        printf("\nThe deleted element is %d", deque[f]);  
        f=-1;  
        r=-1;  
          
    }  
     else if(f==(size-1))  
     {  
         printf("\nThe deleted element is %d", deque[f]);  
         f=0;  
     }  
     else  
     {  
          printf("\nThe deleted element is %d", deque[f]);  
          f=f+1;  
     }  
}  
  
// dequeue_rear() function deletes the element from the rear  
void dequeue_rear()  
{  
    if((f==-1) && (r==-1))  
    {  
        printf("Deque is empty");  
    }  
    else if(f==r)  
    {  
        printf("\nThe deleted element is %d", deque[r]);  
        f=-1;  
        r=-1;  
          
    }  
     else if(r==0)  
     {  
         printf("\nThe deleted element is %d", deque[r]);  
         r=size-1;  
     }  
     else  
     {  
          printf("\nThe deleted element is %d", deque[r]);  
          r=r-1;  
     }  
}
// display function prints all the value of deque.  
void display()  
{  
    int i=f;
    if(i==-1)
    {
        printf("!!queue underflow!!");
        return;
    }
    else
    {  
    printf("\n Elements in queue : ");  
      
    while(i!=r)  
    {  
        printf("%d ",deque[i]);  
        i=(i+1)%size;  
    }  
     printf("%d",deque[r]);
    }   
}

void main()  
{  
   int ch,x;
   while(1)
   {
       printf("\nEneter 1 to enqueue at front\nEnter 2 to enqueue at rear\nEnetr 3 to dequeue at front\nEnter 4 to dequeue at rear\nEnter 5 to display\nEnter 6 to exit\n");
       printf("Enter your choice: ");
       scanf("%d",&ch);
       switch(ch)
        {
            case 1:
                printf("Eneter the data to insert at front: ");
                scanf("%d",&x);
                enqueue_front(x);
                break;
            case 2:
                printf("Eneter the data to insert at end: ");
                scanf("%d",&x);
                enqueue_rear(x);
                break;
            case 3:
                dequeue_front();
                break;
            case 4:
                dequeue_rear();
                break;
            case 5:
                display();
                break;
            default:
                exit(0);
                break;
        }
   }   
}  
