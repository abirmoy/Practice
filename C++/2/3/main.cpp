#include <iostream>

using namespace std;

int main()
{
    const float PI = 3.14159;
    float radius, r; // for storing input values

    cout << "Enter Radius:";
    cin >> radius;

    r = radius/(2*PI);

    float area = 4* PI * (r*r);
    float volume = (4/3) * PI * (r*r*r);
    cout << "Area: "<< area << "\nVolume:" << volume << endl;
    return 0;
}
