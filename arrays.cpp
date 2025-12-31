

   /* int nums[5]={7, 6, 8, 9, 2};
    int max=nums[0];
    for (int i=1; i<5; i++){
        if (nums[i]> max) 
             max = nums[i]; 
    }
    cout <<"Largest element is: "<<max<<endl;*/
   



 

  /*  int max=nums[0];
    for (int i=1; i<6; i++){ if ( nums[i]>max) max=nums[i]; }
         cout<<"The largest number is: "<<max<<endl;
*/

   /* int nums[5]={7, 6, 8, 9, 2};
    */
   


#include <iostream>
using namespace std;
 
int main () {
    int nums[9]={66, 2, 3, 4, 5, 6, 7, 8, 9};
    int min=nums[0];
    for (int i=1; i<9; i++){
        if (nums[i]<min) min=nums[i];

    }
 cout<<"The smallest number is: "<<min<<endl;
 
 int max=nums[0];
    for (int i=1; i<9; i++){
        if (nums[i]> max) 
             max = nums[i]; 
    }
    cout <<"Largest element is: "<<max<<endl;
return 0;

}




