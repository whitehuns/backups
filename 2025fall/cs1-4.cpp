#include <iostream>
using namespace std;

void swap(int*, int*);
int GCD(int, int);

int main()
{
  int x, y;

  cout << "Enter two numbers: ";
  
  cin >> x;
  cin >> y;

  cout << "The Greatest Common Divisor of " << x << " and " << y << ": "
    << GCD(x, y) << endl;

  return 0;

}

void swap(int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;

  return;
}

int GCD(int a, int b)
{
  int r;

  if (a < b)
  {
    swap(&a, &b);
  }

  while(1)
  {
    r = a % b;

    if (r == 0)
    {
      return b;
    }

    else
    {
      swap(&a, &b);
      swap(&b, &r);
    }
  }
}


