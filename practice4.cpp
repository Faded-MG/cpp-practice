#include <iostream>
#include <string>

using namespace std;
enum EmploymentType {
 FULL_TIME,
 PART_TIME,
 CONTRACT,
};

union ContactInfo {
    long long phoneNumber;
    char email[30];
};
struct  PersonalDetails {
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

int main (){
    Employee em;
    Employee * prt = &em;
    
    cout<<"====EMPLOYEE INFORAMTION SYSTEM======="<<endl;
    cout<<"Enter your Employee ID: "<<endl;
    cin>>prt->empID;
    cout<<"Enter your Name: "<<endl;
    cin>>prt->details.name;
    cout<<"Enter your Age: "<<endl;
    cin>>prt->details.age;
    cout<<"Enter your Employement type(in words)"<<endl;
    cin>>prt->type;
    cout<<"Contact Information"<<endl;
    cin>>prt->details.contact;
    cout<<"Enter your salary"<<endl;
    cin>>prt->salary;

    cout<<"Employee Information"<<endl;
    cout<<"Employee ID: "<<prt->empID<<
   


    return 0;
}
