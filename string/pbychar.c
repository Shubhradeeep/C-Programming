#include<stdio.h>
#include<string.h>
int main(){
   char str[1000];
   char ch;
   int i=0;
    printf("Enter the charecters: ");
   while(ch!='\n'){
   
    scanf("%c",&ch);
    str[i]=ch;
    i++;
   }
   str[i]='\0';
   puts(str);
   printf("String Lenght is : %d\n",strlen(str)-1);

    return 0;
}