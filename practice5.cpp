#include <iostream>
#include <cctype>
using namespace std;

bool checkUppercase(char ch) {
    return isupper(ch);
}

int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;

    if (checkUppercase(c))
        cout << "Uppercase character";
    else
        cout << "Not uppercase";

    return 0;
}
