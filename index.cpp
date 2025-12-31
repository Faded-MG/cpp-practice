#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    stringstream file;
    file << "abcdefghijklMnopqrstuvwxyz\neof";
    
    int start, end;
    cout << "Enter start index: ";
    cin >> start;
    cout << "Enter end index: ";
    cin >> end;

    ss.clear();
    ss.seekg(start, ios::beg);

    string result = "";
    char ch;

    for (int i = start; i <= end; i++) {
        ss.get(ch);
        result += ch;
    }

    cout << "Output: ";
    for (char c : result)
        cout << c << " ";

    // Open or create the real file and modify it safely
    fstream fs("random.txt", ios::in | ios::out | ios::trunc);
    if (!fs.is_open()) {
        cerr << "\nFailed to open random.txt\n";
        return 1;
    }

    // ensure there's content to modify
    fs << "abcdefghijklMnopqrstuvwxyz\neof";
    fs.flush();

    fs.seekp(12, ios::beg);
    fs.put('M');

    fs.clear();
    fs.seekg(0, ios::beg);
    string text;
    getline(fs, text);
    cout << "\n" << text << endl;

    return 0;
}
