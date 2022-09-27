/* Write a program to insert a string at given position in the main
text. */

#include <stdio.h>
#include <string.h>
 
int main()
{
char a[20];
char b[20];
char c[20];
int p=0,r=0,i=0;
int t=0;
int x,g,s,n,o;

 
puts("Enter First String:");
gets(a);
puts("Enter Second String:");
gets(b);
printf("Enter the position where the item has to be inserted: ");
scanf("%d",&p);
r = strlen(a);
n = strlen(b);
i=0;
 

while(i <= r)
{
 c[i]=a[i];
 i++;
}
s = n+r;
o = p+n;
 

for(i=p;i<s;i++)
{
 x = c[i];
 if(t<n)
 {
  a[i] = b[t];
  t=t+1;
 }
 a[o]=x;
 o=o+1;
}
 
printf("%s", a);
return 0;
}
