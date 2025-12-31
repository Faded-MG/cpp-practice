#include <iostream> 
using namespace std;
int main (){
    int nums[9]={12, 2, 3, 4, 5, 6, 7, 8, 9};
    cout<<"The first element is :"<<nums[0]<<endl;
    cout<<"The elements put in reverese order is: "<<endl;
    for (int i=9; i>=0; i--) {
        cout<<nums[i]<<" ";
    }
    cout<<"The elements put in order is : "<<endl;
    for (int i=0; i<9; i++){
        cout<<nums[i]<<" ";
    }
    int min=nums[0], max=nums[0];
    for (int i=1; i<9; i++) {
        if (nums[i]<min) min=nums[i];
        if (nums[i]>max) max=nums[i];
    }
    cout<<"The smallest element is: "<<min<<endl;
    cout<<"The largest element is: "<<max<<endl;
    return 0;
}