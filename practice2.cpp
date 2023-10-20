#include <iostream>

using namespace std;

int main()
{
  int num1, num2;
  cout << "Input Number: ";
  cin >> num1;
  cout << "Input Number: ";
  cin >> num2;
  // Version 1
  cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2;
  cout << "\nThe difference of " << num1 << " and " << num2 << " is " << num1 - num2;
  cout << "\nThe product of " << num1 << " and " << num2 << " is " << num1 * num2;
  cout << "\nThe quotient of " << num1 << " and " << num2 << " is " << (float)num1 / (float)num2;

  // Version 2
  string name;
  getchar();
  cout << "\n\nInput your name: ";
  getline(cin, name);
  cout << "\nYour name is " << name;
  return 0;
}