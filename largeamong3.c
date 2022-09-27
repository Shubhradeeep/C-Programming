#include <stdio.h>

void grt(int *x, int *y, int *z);
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    grt(&a, &b, &c);
    return 0;
}
void grt(int *x, int *y, int *z)
{
    if (*x > *y && *x > *z)
        printf("Largest is %d", *x);
    else if (*y > *x && *y > *z)
        printf("Largest is %d", *y);
    else
        printf("Largest is %d", *z);
}