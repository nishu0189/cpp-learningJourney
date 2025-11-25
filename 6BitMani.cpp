
/*
| Trick                                   | Meaning                    |
| --------------------------------------- | -------------------------- |
| `n & 1`                                 | Last bit → check odd/even  |
| `n << 1`                                | Multiply by 2              |
| `n >> 1`                                | Divide by 2                |
| `n & (n - 1)`                           | Removes the lowest set bit |(lowest set bit means rightmost first 1)
| `n & -n`                                | Gets the lowest set bit    |
| `__builtin_popcount(n)` *(C++ builtin)* | Count set bits             |

*/






// /1. *DECIMAL TO BINARY FOR SMALL NO.*/
// #include <iostream>
// #include <cmath>

// using namespace std;

// int main() {
//     // int n= 1; 
//     int n;
//     cout<<"enter the no";
//    cin>>n;
//     int i=0;
//     int ans=0;
//     while(n){
//        int bit = n&1;
//         n= n>>1;
//         ans = ans+ (bit * pow(10,i));
//         i++;
//     }
// cout<<ans;

//     return 0;
// }





 /*1.1 STRING USE FOR big number (Decimal to binary)*/
// #include <iostream>
// #include <cmath>

// using namespace std;

// int main() {
//     // int n= 1; 
//     int n;
//     cout<<"Enter the no ";
//    cin>>n;

//     string bit = "";
//     if(n==0) return 0;
//     while(n){
//       bit = to_string(n&1) + bit;
//         n= n>>1;
//     }
// cout<<bit;

//     return 0;
// }







/* 1.2 BINARY FOR NEGATIVE (Decimal to binary) */
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;

//     bool isNegative = (n < 0); // check if negative
//     n = abs(n); // work with positive value

//     int i = 0;
//     long long ans = 0; // use long long for bigger binary numbers

//     while (n) {
//         int bit = n & 1;
//         n = n >> 1;
//         ans = ans + (bit * pow(10, i));
//         i++;
//     }

//     if (isNegative) {
//         cout << "-" << ans; // prepend minus sign
//     } else {
//         cout << ans;
//     }

//     return 0;
// }




/* 2. BINARY TO DECIMAL*/

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
 
//     int n;
//     cout<<"Enter a no in binary ";
//     cin>>n;
//     int ans =0;
//     int i=0;
    
// while(n){
//     int digit = n%10; // int bit = n&1; is wrong because it take 101 as a deci no. not a binary
//     n = n/10;
     
// if(digit ==1){
// ans = ans+ pow(2,i);
// }
// i++;
//     }
 
//     cout<<"No in Decimal "<<ans;

//     return 0;
// }




/*3. COMPLEMENT A NO.*/

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a no.: ";
//     cin >> n;

//     int m = n;
//     int mask = 0;

//     while (m) {
//         mask = (mask << 1) | 1; // build mask like 111
//         m = m >> 1;             // move to next bit
//     }

//     int output = n ^ mask; // flip bits
//     cout << output;        // show complement

//     return 0;
// }


/*4. POWER OF 2 (LEETCODE 231) SOLVED USING BIT MANUPILATION*/

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter a No.: ";
//     cin>>n;
    
//     if (n > 0 && (n & (n - 1)) == 0) {
//         cout << n << " is a power of 2" << endl;
//     } else {
//         cout << n << " is NOT a power of 2" << endl;
//     }
//     return 0;
// }





/*4.1 Without Bit manupulation*/


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter a No.: ";
//     cin>>n;
// int m = n ;
//     if(n<=0)  cout << n << " is NOT a power of 2" << endl;

//     while(n%2 == 0){
//         n = n/2;
//     }

//     if(n==1) cout << m << " is a power of 2" << endl;
//     return 0;
// }



/*5.Find out the prime no*/


// #include <iostream>
// using namespace std;

// bool iseven(int a){

// return ((a&1) == 0);
// }

// int main() {
//     int n ;
//     cout<<"Enter a No. ";
//     cin>>n;

//     if(iseven(n)){
// cout<<n<<" is even";
//     }
// else cout<<n<<" is odd";

//     return 0;
// }




/*6. find out the consucetive no. */

// #include <iostream>
// using namespace std;

// int SetBitCnt(int n){
// int cnt=0;

//     while(n){

// cnt = cnt+(n&1);
// n = n>>1;
//     }
//     return cnt;
// } 

// int main() {
//  int a ,b;
//  cout<<"Enter the a "; cin>>a;
//  cout<<"Enter the b "; cin>>b;
 
//  int res = a&b;

// cout<<"No. of set bit in a&b: "<< SetBitCnt(res);
 
//     return 0;
// }




/*7. Find the unique ele from where where every in arr have two copy of same value except 1 ele*/


// #include <iostream>
// using namespace std;

// int uniqueBit(int arr[],int n){
// int ans =0;

// for(int i=0;i<n;i++){
//     ans = ans^arr[i];
// }
// return ans;
// }
   

// int main() {
 
//     int arr1[9] = {3,4,2,1,10,3,1,4,2};
//      cout<<"Unique element in array: ";
//    cout<<uniqueBit(arr1,9);
//     return 0;
// }



/*Find the */



