//STRING CHAR CONCEPT
/*#include <stdio.h>
int main()
{
    char ch; 
   printf("Enter text :");
   scanf("%c", &ch);        
   printf("%c \n", ch); 
   char a[10];
    printf(" Enter tet :");
   scanf("%s", &a);        
   printf("%s",a); 

    return 0;
}*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char ch,s[100] ;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    printf("Enter text :");
    scanf("%c",&ch);
    printf("%c\n",ch);
    printf("enter txt :");
    scanf("%s",s);
    printf("%s\n",s);
   /* scanf("\n");//to avoid new line character as input to next string
    scanf("%[^\n]%*c", s);
    // or gets(s); can be used
   printf("%s",s);*/
    return 0;
    
}
