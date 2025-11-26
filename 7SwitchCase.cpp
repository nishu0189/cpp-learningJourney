/*1. Switch case (mini calculator) */

// #include <iostream>
// using namespace std;

// int main() {
//  double num1, num2;
//  char op;

// cout<<"Enter the 1st number"<<endl;
// cin>>num1;


// cout<<"Enter the operator"<<endl;
// cin>>op;

// cout<<"Enter the 2nd number"<<endl;
// cin>>num2;


// switch(op){
// case '+': 
// cout<<"Result: "<< (num1 + num2)<<endl;
// break;

// case '-': 
// cout<<"Result: " <<(num1 - num2)<<endl;
// break;
// case '*':
// cout<<"Result: " <<(num1 * num2)<<endl;
// break;
// case '/':
// cout<<"Result: " <<(num1 / num2)<<endl;
// break;

// default:
// cout<<"Invalid operator";

//     }
    
//     return 0;
// }





/*2. Switch case Without BREAK*/

// #include <iostream>
// using namespace std;

// int main() {
 
//     int n ;
//     cout<<"Enter no. btw 1 to 5: ";
//     cin>>n;

//     switch(n){
// case 1 : cout<<"output 1 "<<endl;
// case 2: cout<<"output 2 "<<endl;    
// case 3: cout<<"output 3 "<<endl;
// case 4: cout<<"output 4 "<<endl;
// case 5: cout<<"output 5 "<<endl;
// default: cout<<"default is also run";
//     }

//     return 0;
// }






/*3. SWITCH CASE WITH EXIT (To exit from the outter infinity loop)*/
/*exit() is a built-in C/C++ function that immediately terminates the entire program, no matter where you call it from
 — even if you’re deep inside an infinite loop and a switch case.*/


// #include <iostream>
// using namespace std;

// int main() {
// while(true){
//     int choice;
//     cout<<"Enter choice (0 to exit): " ;
//     cin>>choice;

// switch (choice)
// {
// case 1: cout<<"Option 1 \n";  break;
// case 2: cout<<"Option 2 \n"; break;
// case 0: exit(0); // terminate program immed
// default: cout<< "Invalid \n";
// break;
// }
// }    
//     return 0;
// } 




/* count the no. 100 rs note, 50 ruppes, 20rs, 10rs, 1 rs*/

#include <iostream>
using namespace std;

int main() {
cout<<"Enter the amount"<<endl; 
int n; cin>>n;

int cnt;

    switch (1)
    {
        
    case 1:
    cnt=n/100;
      n = n%100;
      cout<<"100rs note: "<<cnt<<endl;
   
    case 2:
    cnt=n/50;
      n = n%50;
      cout<<"50rs note: "<<cnt<<endl;


    case 3:
    cnt=n/20;
      n = n%20;
      cout<<"20rs note: "<<cnt<<endl;
      

    case 4:
    cnt=n/10;
      n = n%10;
      cout<<"10rs note: "<<cnt<<endl;
 
    case 5:
      cnt=n;
      cout<<"1rs note: "<<cnt<<endl;  

    }

    return 0;
}