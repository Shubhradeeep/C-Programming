#include <stdio.h>
void main()
{
  int c, f, last, m, n, ser, a[100];
  printf("Enter number of elements\n");
  scanf("%d", &n);//n=5
  printf("Enter %d integers\n", n);
  //input
  for (c = 0; c < n; c++)
  {
    printf("Enter the No.=");
    scanf("%d", &a[c]);//10,20,30,40,50
  }
  printf("Enter value to find\n");
  scanf("%d", &ser);//ser=40
  f = 0;//f=0
  last = n - 1;//last=4
  m = (f+last)/2;//m=2
  for(;f <= last;m = (f + last)/2) //1<=4
  {
    if (a[m] < ser) //a[0]<20  10<60
      f = m + 1;//f=1
    else if (a[m] == ser) //10==60
    {
      printf("%d found at location %d.\n", ser, m+1);
      break;
    }
    else 
      last = m - 1;//last=-1
  }
  if (f > last)
    printf("Not found! %d isn't present in the list.\n", ser);

}
