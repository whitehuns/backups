#include <stdio.h>

int digitsum(int);

int main()
{
  int num;
  printf("Enter any number to find sum of digits: ");
  scanf("%d", &num);
  printf("Sum of digits of %d = %d\n", num, digitsum(num));
  return 0;
}

int digitsum(int val)
{
  if (val < 10)
  {
    return val;
  }
  
  return (val % 10) + digitsum(val / 10);
}



