#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0, m;
    cout << "Enter a Four digit number: "; // Assuming user will always enter 4 digit int
    cin >> n;
    while(n>0) {
        m = n%10;
        //cout <<"m:"<<m<<endl;
        sum = sum + m;
        n = n/10;
        //cout <<"n:"<<n<<endl;


    }

    cout << "Sum of four digit number = " << sum <<endl;
    return 0;
}
