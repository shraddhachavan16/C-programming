#include <iostream>
using namespace std;

int main() {
    float t;
    char u;

    cout << "Enter the temperature and unit (C/F): ";
    cin >> t >> u;

    if (u == 'C' || u == 'c') {
        cout << "Temperature in Fahrenheit = " << (t * 9 / 5) + 32 << " F";
    }
    else if (u == 'F' || u == 'f') {
        cout << "Temperature in Celsius = " << (t - 32) * 5 / 9 << " C";
    }
    else {
        cout << "Invalid unit! Please enter C or F";
    }

    return 0;
}
