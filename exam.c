#include<stdio.h>
int main(){
    int n1,n2,num,r,sum,temp;
    printf("Enter the lower limit and upper limit: ");
    scanf("%d %d", &n1, &n2);

    for(num=n1;num<=n2;num++){
         temp=num;
         sum = 0;

         while(temp!=0){
             r=temp%10;
             temp=temp/10;
             sum=sum+(r*r*r);
         }
         if(sum==num)
             printf("%d ",num);
    }

    return 0;
}