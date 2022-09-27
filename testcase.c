#include<stdio.h>
int main(){
int	y,x=6;
printf("%d\n",x);
scanf("%d",&y);
printf("%d\n",y);
printf("%d\n",&y);
printf("%d\n",*(&y));
printf("%u\n",&y);
printf("%p\n",&y);

printf("%x\n",&y);

return 0;
}
