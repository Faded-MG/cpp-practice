#include <iostream>
using namespace std;

double ctoF(double c){
    return (9.0 / 5.0) * c + 32;
}

int main(){
    double c;
    cout << "Enter the temperature in Celsius: " << endl;
    cin >> c;
    cout << "The answer is: " << ctoF(c) << " F" << endl;

    return 0;
}
