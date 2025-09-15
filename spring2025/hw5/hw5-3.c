#include <stdio.h>

int main()

{
  int num, count = 1;
  printf("Print all even numbers till: ");
  scanf("%d", &num);
  printf("All even numbers from 1 to 20 are:\n");
  while(count <= num / 2)
  {
  printf("%d\n", 2*count);
    count++;
  }
  return 0;
}
