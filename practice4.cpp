#include <iostream>
#include <cstring>

using namespace std;

enum EmploymentType {
    FULL_TIME,
    PART_TIME,
    CONTRACT
};

union ContactInfo {
    long long phoneNumber;
    char email[30];
};

struct PersonalDetails {
    char name[30];
    int age;
    ContactInfo contact;
};

struct Employee {
    int empID;
    EmploymentType type;
    PersonalDetails details;
    float salary;
};

int main () {
    Employee em;
    Employee *ptr = &em;
    int choice;

    cout << "==== EMPLOYEE INFORMATION SYSTEM =======" << endl;

    cout << "Enter Employee ID: ";
    cin >> ptr->empID;

    cout << "Enter Name: ";
    cin >> ptr->details.name;

    cout << "Enter Age: ";
    cin >> ptr->details.age;

    cout << "Employment Type (0-FULL_TIME, 1-PART_TIME, 2-CONTRACT): ";
    cin >> choice;
    ptr->type = static_cast<EmploymentType>(choice);

    cout << "Contact Info (1-Phone, 2-Email): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter Phone Number: ";
        cin >> ptr->details.contact.phoneNumber;
    } else {
        cout << "Enter Email: ";
        cin >> ptr->details.contact.email;
    }

    cout << "Enter Salary: ";
    cin >> ptr->salary;

    cout << "\n===== Employee Information =====" << endl;
    cout << "Employee ID: " << ptr->empID << endl;
    cout << "Name: " << ptr->details.name << endl;
    cout << "Age: " << ptr->details.age << endl;

    cout << "Type: "
         << (ptr->type == FULL_TIME ? "FULL_TIME" :
             ptr->type == PART_TIME ? "PART_TIME" : "CONTRACT")
         << endl;

    if (choice == 1)
        cout << "Contact: " << ptr->details.contact.phoneNumber << endl;
    else
        cout << "Contact: " << ptr->details.contact.email << endl;

    cout << "Salary: " << ptr->salary << endl;
    cout << "==================================" << endl;

    return 0;
}
