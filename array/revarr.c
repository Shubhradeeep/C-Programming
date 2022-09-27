#include<stdio.h>
void rev(int arr[], int n);
int main(){
     int i,arr[]={98,23,69,90,12,51};
     rev(arr,6);
     return 0;
}
void rev(int arr[], int n){
     int i;
     for(i=0;i<n/2;i++){

     int firstval= arr[i];
     int secval= arr[n-i-1];

     arr[i]= secval;
     arr[n-i-1]= firstval;
     }
     for(i=0;i<6;i++)
          printf("%d\t",arr[i]);
    
     
}