 // sum of numbers from m to n//
 #include<stdio.h>
int main()
{
    int m,n, sum=0;
    printf("Enter two no : ");
    scanf("%d %d", &m, &n);
    while (m <= n) {
	sum= sum+m;
        m++;
    }

    printf("Sum is %d", sum);
    return 0;
}
