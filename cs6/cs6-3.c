#include <stdio.h>

int sumOfDigits(int);

int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Sum of digits = %d\n", sumOfDigits(num));
  return 0;
}

int sumOfDigits(int val)
{
  if (val < 10)
  {
    return val;
  }
  
  return (val % 10) + sumOfDigits(val / 10);
}


