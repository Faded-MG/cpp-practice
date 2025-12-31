#include <iostream>
#include <string>
using namespace std;
struct Student { 
    string name;
    int age;
    float gpa;

};
struct Address {
    string City;
    int kebele;

};
struct College {
    int year;
    string universityName;
    string department;
    string advisorName;
};
int main (){
    Student s1;
   s1.name;
   s1.age;
   s1.gpa;
    cout<<"Enter your name"<<endl;
    cin>>s1.name;
    cout<<"Enter your age"<<endl;
    cin>>s1.age;
    cout<<"Enter your GPA"<<endl;
    cin>>s1.gpa;
     Address add;
   add.City;
   add.kebele;
   cout<<"Enter your city name"<<endl;
   cin>>add.City;
   cout<<"Enter your Kebele"<<endl;
   cin>>add.kebele;

   College col;
   col.year;
   col.department;
   col.universityName;
   col.advisorName;
   cout<<"What is your Unvesity/College name?"<<endl;
   cin>>col.universityName;
   cout<<"What year are you in?"<<endl;
   cin>>col.year;
   cout<<"What is your major?"<<endl;
   cin>>col.department;
   cout<<"What is your Advisor's Name?"<<endl;
   cin>>col.advisorName;

   cout<<"========Student Information=========="<<endl;
   cout<<"Name: "<<s1.name<<endl;
   cout<<"Age: "<<s1.age<<endl;
   cout<<"GPA: "<<s1.gpa<<endl;
   cout<<"City: "<<add.City<<endl;
   cout<<"Kebele: "<<add.kebele<<endl;
   cout<<"University: "<<col.universityName<<endl;
   cout<<"Year: "<<col.year<<endl;
   cout<<"Majoring in: "<<col.department<<endl;
   cout<<"Advisor's Name: "<<col.advisorName<<endl;

 

   return 0;



}