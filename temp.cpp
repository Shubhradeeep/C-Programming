/* swap using temporary variable*/

#include<stdio.h>


main()
{
	int a,b,temp;
	printf("enter first number");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
	
	
	temp=a;
	a=b;
	b=temp;
	printf("the swapped numbers are %d and %d",a,b);
	
	return 0;
}
