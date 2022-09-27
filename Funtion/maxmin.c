#include <stdio.h>
void max(int, int);
void min(int, int);
main()
{
    int a;
    int b;
    printf("Enter numbers : ");
    scanf("%d%d", &a, &b);
    max(b, a);
    min(b, a);
}
void max(int b, int a)
{
    if (b > a)
        printf("Maximum is %d", b);
    else
        printf("Maximum is %d", a);
}

void min(int b, int a)
{
   /* if (b > a)
        printf("\nMinium is %d", a);
    else
        printf("\nMinium is %d", b);*/
        printf("\nminimum is %d", (a > b ) ? b : a);
}