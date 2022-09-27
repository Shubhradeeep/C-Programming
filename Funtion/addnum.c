#include <stdio.h>
int add(int, int);
int main()
{
    int x, y,k, c;
    printf("Enter two number \n");
    scanf("%d%d", &x, &y);
    c = add(x, y);
     k = add(x, y);
    printf("%d\n", c);
    printf("%d", k);
    return 0;
}
int add(int a, int b)
{
    return (a + b);
}
