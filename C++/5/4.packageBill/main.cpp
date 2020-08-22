#include <iostream>

using namespace std;

int main()
{
    cout << "Program Author: Bapparaz Chandra Das \nID: 2016199123 " << endl;
    int  package_num;
    int bill;
    int rate;
    cout << "Enter Number of Package you want to buy: " << endl;
    cin >> package_num; // Get user input from the keyboard

    if(package_num<1){
        cout << "Please Enter a valid Number" << endl;
    }
    // More than or equal to 100 pack
    else if (package_num>=100){
        rate = 16;
        bill = package_num * rate;
        cout << "Cost of " << package_num <<" packet paper: "<< bill<< " ;16 RMB per pack" << endl;
    }
    // Less than 100 pack
    else{
        rate = 20;
        bill = package_num * rate;

        cout << "Cost of " << package_num <<" packet paper: "<< bill << " ;20 RMB per pack"<< endl;

    }

    return 0;
}
