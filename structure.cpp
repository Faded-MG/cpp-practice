#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    float grade;
};


void printStudent(const Student &s) {
    cout << "Name: " << s.name << ", Age: " << s.age 
         << ", Grade: " << s.grade << endl;
}

int main() {
    
    Student s1 = {"Alice", 20, 88.5};
    Student s2 = {"Bob", 21, 92.0};
    Student s3 = {"Charlie", 19, 79.5};

    Student students[] = {s1, s2, s3};
    int n = sizeof(students)/sizeof(students[0]);

    cout << "Student List:" << endl;
    for (int i = 0; i < n; i++) {
        printStudent(students[i]);
    }

    return 0;
}
