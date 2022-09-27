// 1/1! + 2^2/2! ....//

#include <stdio.h>
#include<math.h>

int main()
{
    int n,i,fact=1;
    float s=0.0;
    printf("Enter the value of n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        s=s+(pow(i,i)/fact);
    }
    printf("The sum of the series is=%f",s);
    
    return 0;
}
