#include <stdio.h>
#include <stdlib.h>
#define max 5
int stack[max],top=-1;
void PUSH(int n);
void POP();
void PEEP();
void DISPLAY();

int main(){
    while(1){
    printf("\nPress 1 to push into the stck\nPress 2 to pop from the stack\nPress 3 to peep\nPress 4 to display \nPress 0 to exit the stack\nEnter your choice ");
    int ch,n;
    scanf("%d",&ch);
    switch(ch){
        case 1:
                printf("Enter the number you want to insert:");
                scanf("%d",&n);
                PUSH(n);
                break;
        case 2:
                POP();
                break;
        case 3:
                PEEP();
                break;
        case 4:
                DISPLAY();
                break;
        default:
                printf("exiting the program.");
                exit(0);
    }
}
return 0;
}
void PUSH(int n){
        if(top==max-1){
                printf("stack overflow");
                return;
        }
        else{
                top++;
                stack[top]=n;
                printf("Insertion Successful");       
        }
}
void POP(){
        int x;
        if(top==-1){
                printf("Stack Underflow");
        }
        else{
             x=stack[top];
        printf("Deletion successfull of %d",x);
         top--;
        }
}
void DISPLAY(){
        int i;
        if(top==-1){
                printf("No elements are there.Stack is empty.");
        }
        else{
             for(i=top;i>=0;i--){
                     printf("the %d element is %d\n",i,stack[i]);
             }
        }
}
void PEEP(){
        int pos;
        
                printf("Enter the position you want to display:");
                scanf("%d",&pos);
        if(top-pos<=-1){
                printf("Stack overflow");
                return;
        }
        else{
                printf("the element is %d",stack[top-pos]);
        }
}
               
               
