#include <iostream>
#include <string>
using namespace std;
 struct Student {
    int id; 
    string name;
    float cgpa;
 };
int main(){
   Student s={ 01, "Gary", 3.9};


   cout<< "ID, Name, CGPA:    "<<s.id<<" "<<s.name<<" "<<s.cgpa<<endl;

   Student &sr = s;

   sr.id= 3;
   cout<<"Student's ID: "<<sr.id<<endl;
   cout<<"Student's ID:  "<<s.id<<endl;
   s.id = 8;
   
    return 0;
}