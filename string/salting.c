#include<stdio.h>
#include<string.h>
void str(char password[]);
int main(){
    char password[100];
    gets(password);
    
    str(password);
    return 0;
}
void str(char password[]){
    char salt[100];
    gets(salt);
    
    char newpass[200];
    
    strcpy(newpass,password);
    strcat(newpass,salt);
   puts(newpass);

}
