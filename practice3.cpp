#include <iostream>
#include <string>
using namespace std;

struct Student {
    int age;
    string name;
    float gpa;
};

int main() {
    Student s1[3];

    for (int i=0; i<3; i++) {
        cout<<"What is your name? "<<endl;
        cin>>s1[i].name;
        cout<<"How old are you? "<<endl;
        cin>>s1[i].age;
        cout<<"What is your GPA? "<<endl;
        cin>>s1[i].gpa;
    }
        cout<<"===Basic Info Form==="<<endl;
        for (int i=0; i<3; i++) {
            cout<<"Name:  "<<s1[i].name<<endl;
            cout<<"Age:  "<<s1[i].age<<endl;
            cout<<"GPA:  "<<s1[i].gpa<<endl;
            
        }
        cout<<"==================="<<endl;
    return 0;
}
