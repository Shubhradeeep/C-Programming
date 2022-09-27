#include<stdio.h>

int main()
{
	 int n, i, sum =0;
	 float  avg=0.0;
	 printf("limit \n");
	 scanf("%d",&n);
	 for(i=1;i<=n;i++)
	 {
	  printf("\n %d ",i);
	  sum = sum +i;
	 }
	 avg = sum/n;
	 printf("\nSum = %d", sum);
	 printf("\nAverage = %f", avg);
	 return 0;
}
	 
	 

