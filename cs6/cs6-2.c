#include <stdio.h>

void isPerfectNumber(int);

int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  isPerfectNumber(num);
  return 0;
}

void isPerfectNumber(int val)
{
  int sum = 0;
  for(int i = 1; i < val; i++){
    if (val % i == 0){
      sum = sum + i;
    }
  }
  if (sum == val)
  {
    printf("%d is a Perfect Number.\n", val);
  }
  else 
{
    printf("%d is not a Perfect Number.\n", val);
  }
}
