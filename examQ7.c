// 1/1 + 2^2/2 +3^3/3...

#include <math.h>
#include <stdio.h>

int main(){
	int n,i,result=0;
	printf("enter the limit ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		result+=(pow(i,i)/i);
	}
	printf("the result is %d", result );
	return 0;
}
