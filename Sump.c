#include<stdio.h>
void sump(int *a,int *b,int *c,int *s)
{
	*s=*a + *b + *c;
	
}
int main()
{
	int n1,n2,n3,sum;
	printf("enter the three numbers ");
	scanf("%d%d%d",&n1,&n2,&n3);
	sump(&n1,&n2,&n3,&sum);
	printf("sum is %d",sum);
	return 0;
}
