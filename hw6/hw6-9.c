#include <stdio.h>

unsigned int fibonacci(int);

int main()
{
  int num;
  printf("Enter any number to find nth fibonacci term: ");
  scanf("%d", &num);
  printf("%d fibonacci term is %d\n", num, fibonacci(num - 1));
  return 0;
}

unsigned int fibonacci(int val)
{
  if (val == 1){
    return 1;
  }

  else if (val == 0){
    return 0;
  }

  return fibonacci(val - 1) + fibonacci(val - 2);
}
