#include <stdio.h>

int main()
{
  int num;
  printf("Enter number to print table: ");
  scanf("%d", &num);
  for(int count = 1; count <=10; count++)
  {
    printf("%d * %d = %d\n", num, count, num *count);
  }
  return 0;
}
