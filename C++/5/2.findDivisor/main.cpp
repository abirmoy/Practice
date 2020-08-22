#include <iostream>

using namespace std;

int main()
{
    cout << "Program Author: Bapparaz Chandra Das \nID: 2016199123 " << endl;
    int  num1;

    cout << "Enter a number: " << endl;
    cin >> num1; // Get user input from the keyboard
    int rem = num1%7;
    if(rem == 0){
        cout << num1 << " is divisible by 7" << endl;
        cout << num1 << "/7 = "<< num1/7.0 << endl;
    }
    else{

        cout << num1 << " is not divisible by 7" <<endl;
    }

    return 0;
}
