#include<stdio.h>
int add(int, int);  
  
int main()  
{  
    int a, b,sum=0;  
    printf(" Enter values for a and b = ");  
    scanf("%d%d", &a, &b); 
	sum=add(a,b); 
	printf("sum= %d",sum);
}
int add(int x,int y)
{
	int sum;  // int c
	sum=x+y;  // c=x+y
	return sum; // return c
}
