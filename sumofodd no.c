#include <stdio.h>

int main()
{
    int i, n, sum=0;

    printf("Enter limit: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++) // for(i=1; i<=n; i+=2) without using if//
    
    if(i%2!=0)
    {
    	printf("\n %d",i);  // this line for show odd numbers//
        sum += i;
    }

    printf("\n Sum of odd numbers = %d", sum);

    return 0;
}
