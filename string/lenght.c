#include<stdio.h>
#include<string.h>
void countlen(char arr[]);
 int main()
 { 
    //char name[]="abcfrt";
    char name[100];
    fgets(name,100,stdin);//name[strcspn(name, "\n")] = 0;
    //gets(name); //no lenght problem
 printf("String Lenght is : %d\n",strlen(name)-1);//strlen(name) lengh funx
//if gets(name);used no need to do -1
 countlen(name);

    return 0;
 }
 void countlen(char arr[]){
    int i,count=0;
    for(i=0;arr[i]!='\0';i++)// if arr[i]!='\n' is applied no need to do (count-1)
    {
                
      printf("%c\t",arr[i]);
        count++;

    }
    printf("\n Lenght of the string is %d",count-1);
    //if gets(name);used no need to do -1
 }