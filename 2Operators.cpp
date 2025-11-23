// // BITWISE OPERATOR and left and right shift

#include <iostream>
using namespace std;

int main() {
    int a= 4;
    int b= 6;

    cout<<"a&b: "<< (a&b) <<endl;
    cout<<"a|b: "<< (a|b) <<endl;
    cout<<"~a: "<< ~a <<endl;    
    cout<<"a^b: "<< (a^b) <<endl;  

    // left and right shift
    cout<<"1 left shift: " <<(17>>1)<<endl;
    cout<<"2 left shift: " <<(17>>2)<<endl;
    cout<< "1 right shift: "<<(19<<1)<<endl;
    cout<< "2 right shift: "<<(19<<2)<<endl;
    return 0;
}
