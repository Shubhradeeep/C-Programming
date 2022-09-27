#include<stdio.h>
int fact(int n)
{
	int f;
	if(n==0)
	return 1;
    else
       {
       	     f=fact(n-1)*n; return f;
	   }
}
 int main ()
{
int n;
     printf("Enter the number");
     scanf("%d",&n);
     printf("factorial is: %d", fact(n));
     return 0;
}
