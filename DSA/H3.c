#include <stdio.h>
int main()
{
    int i,j,k,n,a=1;
    printf("Enter the number of rows\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=(n-i);k++)
        {
            printf("    ");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            printf("%3d ", (a*a));
            a++;
        }
        printf("\n");
    }
    getch();
    return 0;
}