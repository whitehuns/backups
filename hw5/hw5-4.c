#include <stdio.h>

int main()

{
  int num;
  printf("Print all even numbers till: ");
  scanf("%d", &num);
  printf("All even numbers from 1 to 20 are:\n");
  for(int count = 1; count <= num / 2; count++)
   {
    printf("%d\n", 2*count);
  }
  return 0;

  }
