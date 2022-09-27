#include<stdio.h>
int main()
{
    int n, l;
    printf("enter number");
    scanf("%d",&n);
    l=n%10;
   // printf("last digit is %d ",l );
    while (n>10)
    {
        n/=10;
        
    }
    printf("1st digit is %d\n last digit is %d\n sum of last and 1st digits is %d",n,l, n+l);
    return 0;
}