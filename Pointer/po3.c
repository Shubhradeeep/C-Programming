#include <stdio.h>
int a,b,c;
int avg(int* a, int* b);
void pdt(int a, int b);
void sum(int a, int b);
int main() {  
    scanf("%d%d",&a,&b);
    printf("The average is %d",avg(&a,&b));
    sum(a,b);
    pdt(a,b);
    return 0;
}
int avg(int* a ,int* b){ 
    c=(((*a)+(*b))/2);
    return c;
    
}
void sum(int a, int b){
   printf("\nThe sum is %d",a+b);
    }
void pdt(int a, int b){
    printf("\nThe product is %d",a*b);
}