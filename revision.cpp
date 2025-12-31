#include <iostream>
using namespace std;
 int add(int a, int b){
    return a+b;
 }
 int subtract(int a, int b){
    return a-b;
 }
 int multiply(int a, int b) {
    return a*b;
 }
 int divide(int a, int b){
   if (b==0) 
     {cout<<"Can NOT devide by zero";
     return 0;}
    return a/b;
 }
 int main (){
    int num1, num2;
    int choice=4;
    do {
    cout<<"Please, Enter the first number"<<endl;
    cin>>num1;
    cout<<"Please, Enter the second number"<<endl;
    cin>>num2;
    cout<<"=====MENU====="<<endl;
   cout<<"Please, Enter your choice"<<endl;
   cout<<"1, Addition"<<endl;
   cout<<"2, Subtraction"<<endl;
   cout<<"3, Multiplication"<<endl;
   cout<<"4, Division"<<endl;
   cout<<"0, Exit"<<endl;
   cin>>choice;
 
   switch  (choice) {
      case 0: cout<<"Good Bye!"; break;
      case 1: cout<<add(num1, num2); break;
      case 2: cout<<subtract(num1, num2) ;break;
      case 3:cout<<multiply(num1, num2) ;break;
      case 4:cout<< divide(num1, num2) ;break;
      default: cout<<"Invlaid Choice"<<endl; 
   }}
   while (choice != 0);

 return 0;
 } 