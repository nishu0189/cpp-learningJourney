/*1. Fibonacci   Series*/
// #include <iostream>
// using namespace std;

// int main() {
//     int a= 0;
//     int b= 1;

//     int sum =0;
// cout<<a<<" "<<b<<" ";
//     for(int i=0;i<10;i++){
//         sum=a+b;
//         cout<<sum<<" ";
//         a=b;
//         b=sum;
//     }

//     return 0;
// }




/*2. PRIME NO*/
// #include <iostream>
// using namespace std;

// int main() {
//      int n = 3;
//      bool isprime = true;
//     // cin>>n;

//     for(int i=2;i<n-1;i++){
// if(n%i==0) {
//     isprime = false;
//     cout<<"Not a prime no"<<endl;
//     break;}
// }
// if(isprime == true){
//     cout<<"prime no";
// }

// return 0;
// }




/*3. CONTINUE*/

// #include <iostream>
// using namespace std;

// int main() {
    
//     for(int i=0;i<3;i++){
//         cout<<"run"<<endl;
//         cout<<"still run"<<endl;

//         continue;
//         cout<<"unrechable code ";
//     }
//     return 0;
// }


/*4 MINI PROGRAMS ON FOR LOOPS*/


// #include<iostream>
// using namespace std;
// int main() {
//     for(int i = 0; i <= 5; i++) {
//         cout << i << " ";
//         i++;
//     }
// }



/*4.1*/

// #include<iostream>
// using namespace std;

// int main() {
//     for(int i = 0; i <= 5; i--) {
//         cout << i << " ";
//         i++;
//     }
// }



/*4.2*/

// #include<iostream>
// using namespace std;

// int main() {
//     for(int i = 0; i <= 15; i += 2) {
//         cout << i << " ";

//         if(i & 1) {   // bitwise AND operation,It checks whether the last bit of i is 1 — in binary, this means checking if i is odd.
//             continue;
//         }

//         i++;
//     }
// }




/*4.3*/

// #include<iostream>
// using namespace std;

// int main() {
//     for(int i = 0; i < 5; i++) {
//         for(int j = i; j <= 5; j++) {
//             cout << i << " " << j << endl;
//         }
//     }
// }


/*4.4*/

// #include<iostream>
// using namespace std;

// int main() {
//     for(int i=0; i<5; i++) {
//         for(int j=i; j<=5; j++) {
//             if(i+j == 10) {
//                 break;
//             }
//             cout << i << " " << j << endl;
//         }
//     }
// }




/* 5. WHILE LOOP to find the NO. of Notes*/

// #include <iostream>
// using namespace std;

// int main() {
//  int n = 133;
// int h ;
// int tw ;
// int ten ;
// int ones;
// cout<<"answerrr1"<<endl;

//     while(n){

//         if(n>= 100){
//             h = n/100;
//             n= n%100;
//         }

//          if(n>= 20){
//             tw = n/20;
//               n= n%20;
           
//         }

        
//         if(n>= 10){
//              ten = n/10;
//              n= n%10;
//         }

//         if(n>=1) {
//             ones = n;
//             break;
//         }
//     }
    
// cout<<"100 notes: "<< h <<endl;
// cout<<"20 notes: "<<tw  <<endl;
// cout<<"10 notes: "<< ten  <<endl;
// cout<<"1 notes: "<< ones <<endl;

    
//     return 0;
// }



/* 6. SAME output as above but without loop */

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 133;
//     int cnt;

//     cnt = n / 100;
//     n %= 100;
//     cout << "100rs note: " << cnt << endl;

//     cnt = n / 20;
//     n %= 20;
//     cout << "20rs note: " << cnt << endl;

//     cnt = n / 10;
//     n %= 10;
//     cout << "10rs note: " << cnt << endl;

//     cnt = n;
//     cout << "1rs note: " << cnt << endl;

//     return 0;
// }





/*7. Fibonnaci Serier*/


// #include <iostream>
// using namespace std;

// void fibonnaci(int n){
//     int a=0,b=1;
// int nxt;

// for(int i=0;i<n;i++){
// cout<<a<<" ";
// nxt = a+b;
// a=b;
// b=nxt;

//     }

// }

// int main() {
 
//     int n; 
//     cout<<"Enter the nth postion for fibonacci series: ";
// cin>>n;

// cout<<"Fibonnaci Serie: ";
// fibonnaci(n);
//     return 0;
// }


