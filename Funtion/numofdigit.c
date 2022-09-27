#include <stdio.h>

int main()
{
    int num,count = 0;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    /* Run loop till num is greater than 0 */
    // do
    // {
    //     num /= 10;
    //     count++;
    // } 
    while(num != 0)
    {
        num /= 10;
        count++;
    } 

    printf("Total digits: %d", count);
return 0;
}