#include<stdio.h>
int main()
{
int i,n;
printf("enter the terms");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	printf("\n %d",i);

printf("\n result %d",(i*i*i));
}
return 0;
}
