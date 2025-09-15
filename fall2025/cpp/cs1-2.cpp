#include <iostream>
using namespace std;

const int VALUES = 3;

void printMax(int*);

int main()
{
  int num[VALUES];
  for (int i = 0; i < VALUES; i++)
  {
    cin >> num[i];
  }

  printMax(num);

  return 0;
}

void printMax(int *num)
{
  int max = num[0];
  for (int i = 1; i < VALUES; i++)
  {
    if (num[i] > max)
    {
      max = num[i];
    }
  }

  cout << "Maximum number: " << max << endl;
  return;
}
