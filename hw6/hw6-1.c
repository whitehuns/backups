#include <stdio.h>

float cube(int);

int main()
{
  int num;
  printf("Enter any number: ");
  scanf("%d", &num);
  printf("Cube of %d is %.2f\n", num, cube(num));
  return 0;
}

float cube(int val)
{
  val = val * val * val;
  return val;
}

