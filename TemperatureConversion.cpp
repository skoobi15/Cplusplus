#include <iostream>
using namespace std;
int main() {
    char unit;
    cout << "Enter the unit which is to be converted (C/F): ";
    cin >> unit;

    double val;
    cout << "Enter temperature: ";
    cin >> val;

    double result;

    if (unit == 99 or unit == 67) {
     result = (val * 9 / 5) + 32;
     cout << "Temperature in farenhite is " << result << "°F";}

    else if (unit == 102 or unit == 70){
     result = (val - 32)*5/9;
     cout << "Temperature in celsius is " << result << "°C";
    }
    return 0;
    
}