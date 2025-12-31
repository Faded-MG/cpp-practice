//This is the title
#include <iostream>
using namespace std;

    void sayHi(){
        cout<<"Hola"<<endl;
    }
    void sayThanks(){
        cout<<"Gracias!"<<endl;
    
    }
    void sayBye(){
        cout<<"Adios!"<<endl;
    }
   int main (){ int choice;
   
    cout<<"1 to say Hi"<<endl;
    cout<<"2 to say Thanks"<<endl;
    cout<<"3 to say Bye"<<endl;
     cout<<"Enter your choice"<<endl;
      cin>>choice;
  
    switch(choice) {
    case 1: sayHi(); break;
    case 2: sayThanks(); break;
    case 3: sayBye(); break;
    default: cout<<"Invalid Choice"<<endl;
    }
return 0;
 }