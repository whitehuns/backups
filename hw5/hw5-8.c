#include <stdio.h>

int main()
{
  float num, result = 0;
  do {
    printf("Enter a number: ");
    scanf("%f", &num);
    result = result + num;
  } while (num!=0);
  printf("Sum = %.2f\n", result );
  return 0;
}
