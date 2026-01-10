#include <iostream>
using namespace std;
double ctoF(double c){
    return (9.0/5.0) * c + 32; 
};
double ftoC(double f){
    return (5.0/9.0) * (f-32);
};
double ctoK(double c1){
    return (c1 + 273.15);
};
double ktoC(double k){
    return (k - 273.15);
};
double ftoK(double f1){
    return ((5.0/9.0) * (f1 - 32) + 273.15);
};
double ktoF(double k1){
    return ((9.0/5.0) * (k1 - 273.15) + 32);

}
int main (){
    double c, f, c1, f1, k, k1;
    int choice=6;
    cout<<"Enter your choice"<<endl;
    cout<<"1:  Celsius to Fahrenheit"<<endl;
    cout<<"2:  Fahrenheit to Celsius "<<endl;
    cout<<"3:  Celsius to Kelvin "<<endl;
    cout<<"4:  Kelvin to Celsius "<<endl;
    cout<<"5:  Fahrenheit to Kelvin "<<endl;
    cout<<"6:  Kelvin to Fahrenheit "<<endl;
    
    cin>>choice;
    switch(choice) {
     case 1: cout<<" C => F"<<endl; 
    cout<<"Enter the temperature in Celsius: "<<endl;
    cin>>c;
    cout<<"It is "<<ctoF(c)<<" deg F"<<endl; break;
     case 2: cout<<"F => C"<<endl;
    cout<<"Enter the temerature in Fahrenheit: "<<endl;
    cin>>f;
    cout<<"It is "<<ftoC(f)<<" deg C"<<endl;break;
     case 3: cout<<"C => K"<<endl;
    cout<<"Enter the temerature in  Celsius: "<<endl;
    cin>>c1;
    cout<<"It is "<<ctoK(c1)<<" K"<<endl; break;
    case 4: cout<<"K => C"<<endl;
    cout<<"Enter the temerature in Kelvin: "<<endl;
    cin>>k;
    cout<<"It is "<<ktoC(k)<<" deg C"<<endl;break;
    case 5: cout<<"F => K"<<endl;
    cout<<"Enter the temerature in Fahrenheit: "<<endl;
    cin>>f1;
    cout<<"It is "<<ftoK(f1)<<" K"<<endl; break;
    case 6: cout <<"K => F"<<endl;
    cout<<"Enter the temerature in Kelvin: "<<endl;
    cin>>k1;
    cout<<"It is "<<ktoF(k1)<<" deg F"<<endl; break;
    default: cout<<"Invalid Choice"<<endl;
    }
    return 0;
}