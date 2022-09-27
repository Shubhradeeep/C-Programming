#include <stdio.h>

void grt(int *a, int *b, int *c)
{

    if (*a > *b && *a > *c)
    
        
            printf("largest is%d", *a);
        
    
        else if(*b > *c && *b>*a)
        
            printf("largest is%d", *b);
        
    else
    
            printf("largest is%d", *c);
        
}
int main()
{
    int first, second, third;

    printf("Enter the no. \n");
    scanf("%d", &first);

    printf("Enter the no. \n");
    scanf("%d", &second);

    printf("Enter the no. \n");
    scanf("%d", &third);

    grt(&first, &second, &third);

   
    return 0;
}
