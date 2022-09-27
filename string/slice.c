#include<stdio.h>
#include<string.h>
void slice(char str[],int start,int end);

int main(){
    char str[100];
    fgets(str,100,stdin);

    int start,end;
    
    
    scanf("%d",&start);
    scanf("%d",&end);
    slice(str,start,end);
    return 0;
}
void slice(char str[],int start,int end){
    char nstr[100];
    int i,j=0;
     
    for(i=start;i<=end;i++,j++)
    {
    nstr[j]=str[i];
    }
    //nstr[i]='\0';
    puts(nstr);

}