#include<stdio.h>
void cal_area(int *,int *,int *);
void read_area(int *,int *);

int main()
{
	int a,b,area;

	read_area(&a,&b);
	cal_area(&a,&b,&area);
	printf("Area of the tri-angle=%d",area);
return 0;
}
void cal_area(int *a,int *b,int *area)
{
	*area = (*a * *b)/2;
}
void read_area(int *a,int *b)
{
	printf("Enter the base and height of the tri-angle=");
	scanf("%d %d",a,b);
}
