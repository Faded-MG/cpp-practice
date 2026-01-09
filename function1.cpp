#include <iostream>
using namespace std;


double ctoF(double c){ return (9.0/5.0) * c + 32; }
double ftoC(double f){ return (5.0/9.0) * (f - 32); }
double ctoK(double c){ return c + 273.15; }
double ktoC(double k){ return k - 273.15; }
double ftoK(double f){ return ctoK(ftoC(f)); } 
double ktoF(double k){ return ctoF(ktoC(k)); } 

int main() {
    double temp;

    cout << "Enter temperature in Celsius: ";
    cin >> temp;
    cout << "It is " << ctoF(temp) << " deg F" << endl;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> temp;
    cout << "It is " << ftoC(temp) << " deg C" << endl;

    cout << "Enter temperature in Celsius: ";
    cin >> temp;
    cout << "It is " << ctoK(temp) << " K" << endl;

    cout << "Enter temperature in Kelvin: ";
    cin >> temp;
    cout << "It is " << ktoC(temp) << " deg C" << endl;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> temp;
    cout << "It is " << ftoK(temp) << " K" << endl;

    cout << "Enter temperature in Kelvin: ";
    cin >> temp;
    cout << "It is " << ktoF(temp) << " deg F" << endl;

    return 0;
}
