#include <stdio.h>

int main()
{
    int arr[100];
    int i, size, num, pos;

    printf("Enter size of the array : ");
    scanf("%d", &size);

    printf("Enter elements in array : ");
    for (i = 0; i < size; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &arr[i]);
    }

    //printf("Enter element to delete : ");
   // scanf("%d", &num);
    printf("Enter the element position : ");
    scanf("%d", &pos);

    if (pos > size + 1 || pos <= 0)
    {
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else

        for (i = pos-1; i <= size; i++)
        {
            arr[i] = arr[i + 1];
        }
    
    size--;
    printf("Array elements after dele : ");
    for (i = 0; i < size; i++)
    {
        printf("a[%d]=%d\t", i, arr[i]);
    }

    return 0;
}
