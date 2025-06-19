#include <stdio.h>

void compare(int, int);
int main()
{
  int num1, num2;
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);
  compare(num1, num2);
  return 0;
}

void compare(int val1, int val2)
{
  int max, min;
  max = (val1>=val2)?val1:val2;
  min = (val1<=val2)?val1:val2;
  printf("Maximum = %d\n", max);
  printf("Minimum = %d\n", min);
}

