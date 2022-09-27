#include <stdio.h>
void ceo(int);
main()
{
    int n;
    printf("Enter  number \n");
    scanf("%d", &n);
    ceo(n);
}

void ceo(int n)
{
    /* if (b > a)
         printf("\nMinium is %d", a);
     else
         printf("\nMinium is %d", b);*/
    (n % 2 == 0) ? (printf("%d is Even number\n", n)) : (printf("%d is Odd  number\n", n));
}