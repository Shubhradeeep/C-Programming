// n terms of natural number and their sum //
#include <stdio.h>
int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
       printf("\n %d ",i); sum = sum + i;
    }

    printf("\nSum = %d", sum);
    return 0;
}
