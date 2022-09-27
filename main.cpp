/* p*/
#include<bits/stdc++.h>


int main()
{
	int a,b;
	printf("enter first number");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
	
	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the swapped numbers are %d and %d",a,b);
	
	return 0;
}
