#include <iostream>
#include <string>
using namespace std;


struct College {
    int year;
    string uniName;
    string major;
};
struct Address {
    int kebele;
    string cityName;
    string streetNumber;
    int phoneNumber;
};
struct Student {
    int age;
    string name;
    float gpa;
 
    Address addr;
    College clg;
};

int main(){
    Student s1;
    

    cout<<"=========STUDENT INFORMATION=========="<<endl;
    cout<<"Please, Enter your age, year you are in, your Phone number: "<<endl;
    cin>>s1.age>>s1.clg.year>>s1.addr.phoneNumber;
    cout<<"Enter your name, university name, city you live in, street number, kebele: "<<endl;
    cin>>s1.name>>s1.clg.uniName>>s1.addr.cityName>>s1.addr.streetNumber>>s1.addr.kebele;
    cout<<"Enter your major, gpa: "<<endl;
    cin>>s1.clg.major>>s1.gpa;


    cout<<"Name: "<<s1.name<<endl;
    cout<<"Age: "<<s1.age<<endl;
    cout<<"Year: "<<s1.clg.year<<endl;
    cout<<"University: "<<s1.clg.uniName<<endl;
    cout<<"Major: "<<s1.clg.major<<endl;
    cout<<"GPA: "<<s1.gpa<<endl;
    cout<<"Phone Number: "<<s1.addr.phoneNumber<<endl;
    cout<<"City: "<<s1.addr.cityName<<endl;
    cout<<"Kebele: "<<s1.addr.kebele<<endl;
    cout<<"Street Number: "<<s1.addr.streetNumber<<endl;
  
    return 0;
}