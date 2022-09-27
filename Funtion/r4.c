#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf ("Enter value of n: ");  
    scanf ("%d",&n);
   for ( i=n; i >= 1; i--)
   {
       
       if (i%2==0)
       {
           printf("%d ,",i);
           s=s+i;

       }
    
    
       /* code even number sum */
   }
   printf(" SUm of even numbers upto %d is = %d \n ",n,s);
    return 0;
}
