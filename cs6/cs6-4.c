#include <stdio.h>

int main()
{
  int secret = 27;
  int input;
  printf("Guess the number (between 1 and 100): ");
  scanf("%d", &input);
  while(input != secret){
    if (input > secret){
      printf("Too high. Try again: ");
      scanf("%d", &input);
    }
    else if (input < secret){
      printf("Too low. Try again: ");
      scanf("%d", &input);
    }
  }
  printf("Correct! You guessed the number!\n");
  return 0;
  }

