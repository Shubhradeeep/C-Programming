#include <stdio.h>
int add(int, int);
int main()
{
    int x, y, c;
    printf("Enter two number \n");
    scanf("%d%d", &x, &y);
    c = add(x, y);
    printf("%d", c);
    return 0;
}
int add(int a, int b)
{
    // printf("sum = %d",a+b);
    return (a + b);
}
