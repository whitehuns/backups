#include <iostream>
using namespace std;

int main()
{
  int sum = 0;
  int num;
  
  while(1)
  {
    cout << "Number to add: ";
    cin >> num;

    if (num == 0)
    {
      cout << "Program terminated" << endl;
      return 0;
    }

    sum += num;
    cout<< "Total sum: " << sum << endl;
  }
}
