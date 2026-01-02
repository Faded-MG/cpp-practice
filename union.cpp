/*                      UNION                                
    - A Union is a user-defined data type (like struct)
    - All memberes share the same memory location
    - Only one member can store a valid value at a time
    -  
    
              union union_name {
              data_type member1;
              data_type member2;
              ...
                };

    - Size of the largest member.
        
        union MyUnion {
        int i;
        float f;
        char c;
                 };   
    - now the size of int=4. float=4. char=1;
    since the largest size is 4,the size of the union.


*/







#include <iostream>
#include <string>
using namespace std;

union Data {
    int four;
    float quatro;
    char one;
};
int main (){
    Data d;
    d.four=21;
    cout<<"The value of Four is"<<d.four<<endl;

    return 0;
}














/*Only one member is valid at a time*/