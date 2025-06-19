#include <stdio.h>

void numberstate(int val)
{
  if (val % 2 == 0)
  {
    printf("The number is even.\n");
  }

  else {
    printf("The number is odd\n");
  }
}

int main()
{
  int num;
  printf("Enter any number: ");
  scanf("%d", &num);
  numberstate(num);
  return 0;
}


