#include <stdio.h>

int main()
{
  int num, a, b;
  printf("Enter number of columns: ");
  scanf("%d", &num);
  for(a = 1; a <= num - 1; a++)
  {
    b = 1;
   while(b <= a)
    {
      printf("*");
      b++;
    }
    printf("\n");
  }

  for(int c = 1; c <= num; c++)
  {
    printf("*");
  }

  printf("\n");

  for(a = num - 1; a >= 1 ; a--)
  {
    b = 1;
   while(b <= a)
    {
      printf("*");
      b++;
    }
    printf("\n");
  }

  return 0;

}
