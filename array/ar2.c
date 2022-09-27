#include <stdio.h>
//#define MAX_SIZE 1000 // Maximum array size

int main()
{
    int arr[100]; // Declare an array of MAX_SIZE
    int i, max, min, N,pos=0,count=0;

    /* Input array size */
    printf("Enter size of array: ");
    scanf("%d", &N);

    /* Input elements in array */
    printf("Enter %d elements in the array : ", N);
    for (i = 0; i < N; i++)
    {  
        printf("a[%d]=",i);//print array like a[0]='',a[1]=''
        scanf("%d", &arr[i]);
    }
   
    for (i = 0; i < N; i++)
    {
        if (arr[i] %2== 0){
            printf("\n%d, ", arr[i]);
             count++;}
    }printf("\nNumber of even numbers %d",count);//number of even
    arr[0] = max;
for (i = 1; i < N; i++){
    if (arr[i] > max)
    {
        max = arr[i];
        pos=i;
       
    }
    
   /* if (arr[i] < min)
    {
        min = arr[i];
        printf("Minimum is %d: ", min);
    }*/ 

}printf("\nMaximum is %d ", max);
 printf("\nPosition of the array is %d",pos+1);
 
    return 0;
}