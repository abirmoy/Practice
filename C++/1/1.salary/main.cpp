#include <iostream>

using namespace std;

int main()
{
    const int BASE_SALARY = 800;
    const float COMMISSION = 0.08;

    float sales, salary;

    cout << "Enter Monthly sales: " << endl;
    cin >> sales; // Get monthly salary from user input
    salary = BASE_SALARY + COMMISSION*sales;
    cout << "Salary: " << salary << endl;
    return 0;
}
