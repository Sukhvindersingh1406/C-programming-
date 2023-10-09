#include<stdio.h>
int main()
{
  int a,b;
  printf("enter the valuve of a and b");
  scanf("%d %d",&a,&b);
  int addition = a+b;
  int subtraction = a-b;
  int multiplication = a*b;
  int modulus = a%b;
  printf ("addtion of two no %d\n",addition);
  printf("subtraction of two no %d\n",subtraction);
  printf("multiplication of two no %d\n",multiplication);
  printf("modulus of two no %d\n", modulus);
  return 0;
}
