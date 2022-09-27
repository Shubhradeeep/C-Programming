#include <stdio.h>
#include<math.h>
void am(int n);
void per(int n);
void pri(int n);
int main()
{
    int r;
    printf("Enter the number : ");
    scanf("%d", &r);
    per(r);
    pri(r);
    am(r);
    return 0;
}
void pri(int n)
{
    int i, c = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        printf("%d is a prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }
}
void per(int n){
    int i,sum=0;
    for(i=1;i<n;i++) 

    {
        if(n%i==0)
        sum+=i;
    }   
    if(sum==n)
    printf("This is a perfect number\n");
    else
    printf("This is not a perfect number\n");
}
void am(int n)
{
    int temp,count=0,d,sum=0;
    temp=n;
    while(temp!=0)
    {
        count++;
        temp=temp/10;
    }
    temp=n;
    while(temp!=0)
    {
        d=temp%10;
        sum=sum+((int)pow(d,count));
        temp=temp/10;

    }
    if(sum==n)
    printf("This is an armstrong number\n");
    else
       printf("This is not an armstrong number\n");
}