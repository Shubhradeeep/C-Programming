#include<stdio.h>
int main()
{
	double marks[5][3];
	int i,j,n=3;
	for(i=0;i<n;i++)
	{
		printf("For student %d",(i+1));
		for(j=0;j<3;j++)
	{ printf("for subject %d ",(j+1));
			scanf("%lf",&marks[i][j]);}
	}
	
	
	double h1;
	
	double h[3];
	
	for(j=0;j<3;j++)
	{
		h1=marks[0][j];
		for(i=0;i<n;i++)
		{
			if(marks[i][j]>h1)
			h1=marks[i][j];
		}
		h[j]=h1;
		printf("for subject %d highest is %lf \n",(j+1),h1);
	}
	for(j=0;j<3;j++)
	{
		printf("For subject %d ", (j+1));
		for(i=0;i<n;i++)
		if(h[j]==marks[i][j])
		printf("student %d, ",(i+1));
		
		printf("received highest marks \n");
	}
	
	
	
}
