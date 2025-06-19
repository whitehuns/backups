#include <stdio.h>

float power(float b, int e)
{
  if (e <= 1){
    return b;
  }

 return b * power(b, e - 1);
}

int main()
{
  float base;
  int exponet;
  printf("Enter base: ");
  scanf("%f", &base);
  printf("Enter exponet: ");
  scanf("%d", &exponet);
  printf("%.2f ^ %d = %f\n", base, exponet, power(base, exponet));
return 0;
}


