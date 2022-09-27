#include <stdio.h>
int main()
{
    int x,y; float f,g;
    printf("ENTER NUMBERS :");
    scanf("%d %d %f %f",&x,&y,&f,&g);
    printf("result= %d %d %f %f",x+y, x-y,f+g,f-g);
    return 0;
}
