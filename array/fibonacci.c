#include<stdio.h>
void fibo(int fib[], int n);
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    int fib[n];
    
     fib[0]=0;
     fib[1]=1;
   // printf("%d\t%d\t",fib[0],fib[1]);
    
    fibo(fib,n);

    return 0;
}
void fibo(int fib[],int n){
    int i;
    for(i=2;i<n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];

    }
for(i=0;i<n;i++)
    printf("%d\t",fib[i]);
}