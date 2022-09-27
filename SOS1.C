//1/2^2 + 1/3^2....+ 1/N^2 //
#include <stdio.h>
#include<math.h>
int main()
{
    int n,i;
	float sum=0.0;
    printf("Enter the last number:\n");   
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
    	sum = sum+1/pow(i,2);
	}
	printf("The sum of the series is %f",sum);
	return 0;
}
//  int main(){ int n,i;	double sum=0; printf("Enter the last number:\n");   scanf("%d",&n);  for(i=2;i<=n;i++)  {	double p=i*i;	sum = sum+(1/p); }// printf("The sum of the series is %lf",sum);
