#include<stdio.h>
#include<string.h>

int countv(char str[]);
int main(){
    char str[100];
    fgets(str,100,stdin);
    printf("Number of vowels are: %d",countv(str));

     return 0;
}
   
int countv(char str[]){
    int i,count=0;
    for(i=0;str[i]!='\n';i++)
    {
        if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||
 str[i]=='u' ||str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||
    str[i]=='O' ||str[i]=='U')
     {
        printf("VOWEL %c found in %d location\n",str[i],i);
        count++;}
        }
return count;
}