#include <iostream>
#include <string>

using namespace std;

int main()
{
  uint8_t i = 128;
  uint8_t j = 129;

  uint8_t k = i - j;

  cout << "k is " << (int)k << endl;
  return 0;
}
