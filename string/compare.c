#include<stdio.h>
#include<string.h>
int main(){
    char f[100], s[100];
    char ch;
    
    fgets(f,10, stdin);
    
    fgets(s,10, stdin);
    printf("%d\n",strcmp(f,s));
    scanf("%c",&ch);
    printf("%d\n",ch);
    
    return 0;
}