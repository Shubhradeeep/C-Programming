 // count odd number in a array
#include <stdio.h>
int countodd(int arr[], int n);
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("\nNumber of elements %d", countodd(arr, 9));

    return 0;
}
int countodd(int *arr, int n)
{
    int i, count = 0;
    printf("They are: \n ");
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d \t", arr[i]);
            count++;
        }
    }
    return count;
}