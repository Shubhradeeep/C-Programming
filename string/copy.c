#include<stdio.h>
#include<string.h>
int main(){
   char old[100], new[100], sec[100];
   printf("Enter old: ");
    gets(old);
   // puts(old);
    printf("Enter new: ");
    gets(new);
    
     //puts(new);
    strcpy(new,old);//copy
    
    printf("print new: ");
    puts(new);

printf("Enter sec: ");
    gets(sec);
    
    strcat(old,sec);//concatenation
     printf("After concatenation: ");
    puts(old);
    return 0;
}