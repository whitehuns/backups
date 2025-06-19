#include <stdio.h>

int factorial(int);

int main()
{
  int num;
  printf("Enter number: ");
  scanf("%d", &num);
  printf("%d\n", factorial(num));
  return 0;
}

int factorial(int val)
{
  if (val == 1){
    return 1;
  }
  return val * factorial(val - 1);
}

