#include <stdio.h>

int binarySearch(int arr[], int key, int n) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + ((high - low) / 2);
        if (arr[mid] == key) 
            return mid + 1;
        else if (key < arr[mid]) 
            high = mid - 1;
        else 
            low = mid + 1;
    }
    return -1;
}

int main()
{
    int i , n, key;
    printf("Enter the no. of elements: "), scanf("%d", &n);
    int arr[n]; printf("Enter the array: ");
    for ( i = 0; i < n; i++) 
        scanf("%d", &arr[i]);
    printf("Enter the elment to be searched: ");
    scanf("%d", &key);
    int pos = binarySearch(arr, key, n);
    if (pos == -1){
        printf("Element not found!"); 
        return 0;
    }
    printf("Element found at index: %d", pos);
    return 0;
}
