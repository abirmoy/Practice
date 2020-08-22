#include <iostream>

using namespace std;

int main()
{
    cout << "Program Author: Bapparaz Chandra Das \nID: 2016199123 " << endl;
    float  num1;
    float num2;

    cout << "Enter Couple of Numbers to Find Max: "<< endl;
    cin >> num1 >> num2; // Get user input from the keyboard

    if(num1==num2){
        cout << num1 << " and " << num2 << " are same" << endl;
    }
    else{

        cout << "Largest number between " << num1 << " and " << num2 << " is: " << endl;
        if(num1>num2){
            cout << num1;
        }
        else{

            cout << num2;
        }

    }

    return 0;
}
