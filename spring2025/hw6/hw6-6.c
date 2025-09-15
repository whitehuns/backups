#include <stdio.h>

void swap(int, int);

int main()
{
  int x, y;
  printf("Enter Value of x\n ");
  scanf("%d", &x);
  printf("Enter Value of y\n ");
  scanf("%d", &y);
  swap(x, y);
  return 0;
}

void swap(int val1, int val2)
{
  int temp;
  temp = val2;
  val2 = val1;
  val1 = temp;
  printf("After Swapping: x = %d, y = %d\n", val1, val2);
}

