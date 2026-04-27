#include <iostream>
using namespace std;

int main() 
{
    float temp;
    char unit;

    cout << "Enter temperature and unit (C/F): ";
    cin >> temp >> unit;

    if (unit == 'C' || unit == 'c') 
    {
        cout << "Fahrenheit = " << (temp * 9 / 5) + 32 << " F";
    }
    else if (unit == 'F' || unit == 'f') 
    {
        cout << "Celsius = " << (temp - 32) * 5 / 9 << " C";
    }
    else {
        cout << "Invalid unit! Please enter C or F.";
    }

    return 0;
}
