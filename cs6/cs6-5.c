#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));
  int dice = (rand() % 6 ) + 1;
  printf("You rolled a %d!\n", dice);

  return 0;
}
