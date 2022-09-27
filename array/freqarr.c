#include <stdio.h>
#define MAX_SIZE 1000 // Maximum array size

int main()
{
    int a[MAX_SIZE], fr[100], n, i, j;
    printf("Enter the array size: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        fr[i] = 1;
    }
    for (i = 0; i < n; i++)
    {
        if (fr[i] == 0)
            continue;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                fr[i]++;
                fr[j] = 0;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        if (fr[i] != 0)
            printf("\nThe frequency of %d is %d", a[i], fr[i]);
    }
    return 0;
}