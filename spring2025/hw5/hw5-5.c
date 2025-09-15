#include <stdio.h>

int main()
{
  int num, count = 1, result = 0;
  printf("Enter upper limit: ");
  scanf("%d", &num);
  while (2*count <= num)
  {
  result = result + 2*count;
    count++;
  }
  printf("Sum of all even number between 1 to %d = %d\n", num, result);
  return 0;
}
