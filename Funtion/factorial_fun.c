
//Factorial
/*#include <stdio.h>
int facto(int);
int main()
{
    int ans,n;
    printf("Enter the number  ");
    scanf("%d", &n);
   ans= facto(n);
    printf("Ans is= %d",ans);
    return 0;
}
int facto(int n)
{
    int i, f = 1;
    for (i = 1; i <=n; i++)
    {
        f = f * i;
    }
   // printf("Factorial of %d= is %d", n, f);
    return f;
}*/
#include<stdio.h>
int fact(int);
int main() {
    int n;
    scanf("%d", &n);
    printf("The factorial of %d is%d", n, fact(n));
}
int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    int factnm1 = fact(n - 1);
    int factn = factnm1 * n;
    return factn;

}
