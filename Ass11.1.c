#include <stdio.h>
int readarray(int arr[100],int n2)
{
	int i; 
	printf("Enter the values for the array :-\n");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&arr[i]);
	}
	return 0;
}
int small(int arr[100],int n2,int *ind)
{
	int i,s=100000;
	for(i=0;i<n2;i++)
	{
		if(arr[i]<s)
		{
		s=arr[i];
		*ind = i;
	}
	}
	return 0;
}
int larg(int arr[100],int n2,int *ind)
{
	int i,l=-100000;
	for(i=0;i<n2;i++)
	{
		if(arr[i]>l)
		{
		l=arr[i];
		*ind = i;
	}
	}
	return 0;
}
int ichange(int arr[100],int small, int large)
{
	int temp;
	temp = arr[small];
	arr[small] = arr[large];
	arr[large] = temp;
	return 0;
}
void disp(int arr[100],int n2)
{
	int i;
	printf("The changed array is :-\n");
	for(i=0;i<n2;i++)
	{
		printf("%d ",arr[i]);
	}
}
int main()
{
int n,arr[100],spos,lpos;
printf(" Enter the total numbers of terms:-\n") ;
scanf("%d",&n); 
readarray(arr, n);
small(arr,n,&spos);
larg(arr,n,&lpos);
ichange(arr,spos,lpos);
disp(arr,n);
return 0;
}
