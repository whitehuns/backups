#include <iostream>
using namespace std;
#define EXTRA_HAPPY

int main()
{
#ifdef EXTRA_HAPPY
  
  cout << "I'm happy\n" << endl;
#endif
  cout << "OK!\n" << endl;

}

  //ifdefined -> 'compile' the code from ifdef to endif 
  //if not defined -> compiler will delete the code between.

