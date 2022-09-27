/* write a function to swap the values of two variable*/
#include<stdio.h>  
  
void swap(int, int);  
  
int main()  
{  
    int a, b;  
    printf(" Enter values for a and b = ");  
    scanf("%d%d", &a, &b);  
  
    swap(a, b);  
    return 0;  
}  
  
void swap(int x, int y)  
{  
    int temp;  
    temp = x;  
    x = y;  
    y = temp;  
    printf("After swapping: %d and  %d", x, y);  
}
