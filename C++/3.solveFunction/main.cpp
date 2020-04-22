#include <iostream>

using namespace std;

int main()
{
    int  num, result;

    cout << "Enter x: " << endl;
    cin >> num; // Get user input from the keyboard

    if(num>=1 & num<10 ){
        result = 3 * num -5;
        cout << "y = " << result << " when 1<= x =<10" << endl;

    }
    else{
        result = num + 2;
        cout<< "y = " << result << " when x<1 or x>10"<< endl;

    }

    return 0;
}
