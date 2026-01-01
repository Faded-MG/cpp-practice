#include <iostream>
#include <string>
using namespace std;
struct Number1 {
    int num1;
    int num2;
};
int sumOfStruct(int num1, int num2){
    return num1+num2;

}; 

struct Rectangle {
    int length;
    int breadth;
};

int area(Rectangle r) {
    return r.length * r.breadth;
}


int main(){
    cout<<"======Adding two numbers using Struct========"<<endl;
    int num1, num2;
  Number1 n1;
  cout<<"Enter the first number"<<endl;
  cin>>n1.num1;
  cout<<"Enter the second number"<<endl;
  cin>>n1.num2;

cout<<"The sum of the two number is: "<<sumOfStruct(n1.num1, n1.num2)<<endl;



    Rectangle rect;
    rect.length = 4;
    rect.breadth = 5;

    cout << "Area: " << area(rect) << endl;

return 0;
}
