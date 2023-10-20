#include <iostream>

using namespace std;

int main()
{
  int num1, num2;
  // Version 1 Updated
  cout << "SIMPLE CALCULATOR\n\n";
  cout << "Input Number 1: ";
  cin >> num1;
  cout << "Input Number 2: ";
  cin >> num2;

  cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2;
  cout << "\nThe difference of " << num1 << " and " << num2 << " is " << num1 - num2;
  cout << "\nThe product of " << num1 << " and " << num2 << " is " << num1 * num2;
  cout << "\nThe quotient of " << num1 << " and " << num2 << " is " << (float)num1 / (float)num2;

  // Version 1 Updated Amend
  string name;
  cout << "\n\nInput your name: ";
  getline(cin, name);
  cout << "\nYour name is " << name;
  return 0;
}