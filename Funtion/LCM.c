/*LCM*/
#include <stdio.h>
int main()
{
    int a, b, lcm;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    for(lcm=a>b?a:b; lcm<=a*b; lcm++)
    {
        if(lcm%a==0 && lcm%b==0)
           break;
            
    }

    printf("LCM of %d and %d is %d", a, b, lcm);

    return 0;
}
