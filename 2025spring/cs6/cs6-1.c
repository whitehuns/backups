#include <stdio.h>

void charDectector(char);

int main()
{
  char x;
  printf("Enter a character: ");
  scanf("%s", &x);
  charDectector(x);
  return 0;
}

void charDectector(char a)
{
  if (a >= 'A' && a <= 'Z')
  {
    printf("%c is uppercase letter.\n", a);
  }

  else if (a >= 'a' && a <= 'z')
  {
    printf("%c is lowercase letter.\n", a);
  }

}
