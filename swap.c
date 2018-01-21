#include <stdio.h>
#include<conio.h>
 int main()
{
  int a, b, Temp;
 
  printf("\nPlease Enter the value of a and b\n");
  scanf("%d %d", &a, &b);
 
  printf("\nBefore Swap: a = %d and b = %d\n", a, b);
 
  Temp = a;
  a    = b;
  b    = Temp;
 
  printf("\nAfter Swapping: a = %d and b = %d\n", a, b);
 
  return 0;
}
