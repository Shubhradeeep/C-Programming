// #include<stdio.h>
// int main()
// {
//     int i,n,c=0;
//     printf ("Enter value of n ");  
//     scanf ("%d",&n);
//     for (i=2;i<=n/2;i++)       // i=2;i<n;i++
//     {
//         if(n%i==0){
//         c=c+1;
// 		 break;}
//     }
//     if (c==0)
//     printf ("The number is PRIME");
//     else
//     printf ("The number is COMPOSITE");
//     return 0;
// }

#include <stdio.h>
 
int main()
{
    int a, b, i, j, flag;
    printf("Enter lower bound of the interval: ");
    scanf("%d", &a); 
    printf("\nEnter upper bound of the interval: ");
    scanf("%d", &b); 
 
    printf("\nPrime numbers between %d and %d are: ", a, b);
 
    for (i = a; i <= b; i++) {
        
        if (i == 1 || i == 0)
            continue;
 
        
        flag = 1;
 
        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) { // if reminder is not 0 in any case it's a prime
                flag = 0;
               // break;
            }
        }
        // and flag = 0 means i is not prime
        if (flag == 1)
            printf("%d ", i);
    } 
 
    return 0;
}