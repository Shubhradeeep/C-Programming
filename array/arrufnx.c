/*#include <stdio.h>

void printnum(int arr[], int n);
int main()
{
    int arr[] = {1, 3, 4, 8, 0, 7};
    printnum(arr, 6);
    return 0;
}
void printnum(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
   printf("\n");
}*/
#include <stdio.h>

void printnum(int arr[], int n);
int main()
{
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    printf("Enter %d nums\n",n);
    int i,arr[n];
     for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printnum(arr, n);
    return 0;
}
void printnum(int arr[], int n)
{
    int i;
   
   
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}