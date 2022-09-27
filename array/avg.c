#include <stdio.h>
int main()
{
    int a[1000], i,n, sum = 0;
    float avg = 0;
    printf("\n Enter size of array ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        sum += a[i];
    printf("\nSum is %d", sum);
    avg = sum / n;
    printf("\nAverage  is %f", avg);
   // printf(" \n %d", (a[1]) + (a[3]));
    
   
    return 0;
}

