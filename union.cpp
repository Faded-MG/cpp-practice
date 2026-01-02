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
    int i;
    float f;
    char c;
};


/*str[20]*/

int main(){
     Data d;
     d.i=12;
     cout<<"i== "<<d.i<<endl;

    d.f=12.32;
    cout<<"f== "<<d.f<<endl;
  return 0;

/*Explain why the previously stored values become invalid.*/
/*Here is why; if we try to print the value of the 'i' the terminal will give us a
garbage output, because the value has been overwritten. Since Union works in a way that secures 
one memory for the whole member, once that memory is occupied, only that value will be valid THEN.*/

}

/*Only one member is valid at a time*/