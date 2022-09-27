#include<stdio.h>
int main(){
	int i,j,r;
	for(i=1; i<=5;i++)
	{
		for(r=4; r>= i;r--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
