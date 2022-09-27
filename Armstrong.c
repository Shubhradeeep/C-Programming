#include <stdio.h>
#include<math.h>
int main()
{
    int n1, n2, temp, d, sum,count, i;
    printf("Enter the lower limit : ");
    scanf("%d", &n1);
    printf("Enter the upper limit : ");
    scanf("%d", &n2);
    for (i = n1; i <= n2; i++)
    {
        temp = i;
        sum=0;
        count=0;
        while(temp!=0 )
        {
            temp=temp/10;
            count++;
        }
        temp = i;
        while (temp != 0)
        {

            d = temp % 10;
            temp = temp / 10;
            sum = sum + ((int)pow(d,count));
        }
        if (sum == i)
            printf("%d\t", i);
    }
    return 0;
}
