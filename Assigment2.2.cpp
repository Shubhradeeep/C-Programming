/* Write a program in c to calculate the average of two
numbers. Also print their deviation */

#include<stdio.h>


main()
{
	int a,b,c;
	printf("enter first number");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
	c=(a+b)/2;
	printf("\n average of two number %d",c);
	printf("\n deviation from first number %d",a-c);
	printf("\n deviation from second number %d",b-c);
	
	
	return 0;
	
}
