#include <iostream>

using namespace std;

int main()
{
  string name;
  int age;

  cout << "What is your name? :";
  getline(cin, name);
  cout << "What is your age? :";
  cin >> age;
  if (age > 0)
  {
    cout << "Hello, " << name << ". Your age is " << age << endl;
  }
   return 0;
}
