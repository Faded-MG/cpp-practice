#include <iostream>
#include <cstring>  
using namespace std;

enum ProgramType { REGULAR, EXTENSION, DISTANCE };

union ContactInfo {
    long long phoneNumber;
    char email[30];
};

struct PersonalInfo {
    char name[30];
    int age;
    ContactInfo contact;
};

struct Student {
    int id;
    ProgramType program;
    PersonalInfo info;
    float cgpa;
};

int main() {
    Student s;
    Student *ptr = &s;

    ptr->id = 101;
    ptr->program = REGULAR;
    ptr->cgpa = 3.8;

    strcpy(ptr->info.name, "Mahlet");  
    ptr->info.age = 20;


    ptr->info.contact.phoneNumber = 1234567890;
   
    cout << "======STUDENT RECORD MANAGEMENT SYSTEM========" << endl;
    cout << "ID: " << ptr->id << endl;
    cout << "Name: " << ptr->info.name << endl;
    cout << "Age: " << ptr->info.age << endl;
    cout << "Program: "
         << (ptr->program == REGULAR ? "REGULAR" :
             ptr->program == EXTENSION ? "EXTENSION" : "DISTANCE")
         << endl;
    cout << "Contact: " << ptr->info.contact.phoneNumber << endl;
    cout << "CGPA: " << ptr->cgpa << endl;

    return 0;
}
