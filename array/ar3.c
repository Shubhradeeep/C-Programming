#include <stdio.h>

int main()
{
    int arr[100];
    int i, size, num, n = 0, pos;

    /* Input size of the array */
    printf("Enter size of the array : ");
    scanf("%d", &size);

    /* Input elements in array */
    printf("Enter elements in array : \n");
    for (i = 0; i < size; i++)
    {
        printf("a[%d]=",i);
        scanf("%d", &arr[i]);
    }

    /* Input new element and position to insert */
    printf("Enter element to insert : ");
    scanf("%d", &num);
    printf("Enter the element position : ");
    scanf("%d", &pos);

    /* If position of element is not valid */
    if (pos > size + 1 || pos <= 0)
    {
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else
        /* Make room for new array element by shifting to right */
        for (i = size; i >= pos; i--)
        {
            arr[i] = arr[i - 1];
        }
    arr[pos - 1] = num;
    size++;
    printf("Array elements after insertion : ");
    for (i = 0; i < size; i++)
    {   printf("a[%d]=",i); 
        printf("%d\t", arr[i]);
    }

    return 0;
}
