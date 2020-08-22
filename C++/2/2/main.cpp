#include <iostream>

using namespace std;

int main()
{
    cout << "Program Author: Bapparaz Chandra Das \nID: 2016199123 " << endl;
    int num1, num2; // for storing input values


    cout << "Enter two Numbers:";
    cin >> num1 >> num2;
    //cout << "Floor Division: " << num1/num2 <<endl;
    while(num1==0 || num2==0 || num1%num2==0){
        cout << "Please Enter Again:";
        cin >> num1 >> num2;
    }
    cout << "Floor Division: " << num1/num2 <<endl;
    cout << "Normal Division: " << double(num1)/double(num2) <<endl;
    return 0;
}
