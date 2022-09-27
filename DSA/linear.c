#include <stdio.h>
#include <stdlib.h>
int  main(){
    int i,n,search,f=0;
    printf("enter the range:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter the data:");
        scanf("%d",&arr[i]);
    }
    printf("enter the data you want to search:");
    scanf("%d",&search);
    for(i=0;i<n;i++){
        if(arr[i]==search){
            f=1;
            break;
        }
    }
    if(f==1){
        printf("The data found at index %d and position %d",i,i+1);
    }
    else{
        printf("the data is not found");
    }
    return 0;
}
