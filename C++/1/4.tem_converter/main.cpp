#include<iostream>

using namespace std;

int main()
{
    cout << "Program Author: Bapparaz Chandra Das \nID: 2016199123 " << endl;
    float fahrenheit, celsius;

    cout << "Enter the temperature in Celsius : ";
    cin >> celsius;
    fahrenheit = (celsius * 9.0) / 5.0 + 32;
    cout << "The temperature in Fahrenheit : " << fahrenheit << endl;
    return 0;
}
