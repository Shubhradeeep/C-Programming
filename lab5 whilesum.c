/* sum using while loop*/
#include<stdio.h>
int main()
{
    int m,n, i, sum = 0;
    printf("Enter the first number= ");
    scanf("%d", &m);
    printf("Enter the second number= ");
    scanf("%d", &n);
    
    i = m;

    while (i <= n) {
        sum += i;
        ++i;
    }

    printf("Sum = %d", sum);
    return 0;
}
