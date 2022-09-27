#include <stdio.h>

int main()
{
int i, n,f=1;

printf("enter the number \n");
scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("\nfactorial %d",f);

    return 0;
}

