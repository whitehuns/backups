#include <iostream>
using namespace std;

int main(int argc, char *argv[]){

  if (argc != 3){
    cout << "Usage: ./argu num1 num2" << endl;
    return 1;
  }

  int n, m;

  cout << argv[0] << endl;

  n = atoi(argv[1]);
  m = atoi(argv[2]);

  cout << "Argument 1: " << n << " Argument 2: " << m << endl;

  return 0;
}
