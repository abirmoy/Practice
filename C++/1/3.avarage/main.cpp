#include<iostream>

using namespace std;

int main()
{
  float num1, num2, num3; // for storing input values
  float sum, average; // for calculation

  cout << "Enter three Numbers:";
  cin >> num1 >> num2 >> num3;

  sum = num1 + num2 + num3;
  average = sum / 3;

  cout << " Average = " << average << endl;

  return 0;
}
