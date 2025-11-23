// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;
 
//     int i=1;
//     while(i<=n){
//         int j=1;
//          while(j<=n-i+1){
//         cout<<" ";
//              j++; }
//              int z=1;
//         while(z<=i){
//             cout<<i;
//             z++;
//         }
//              i++;
//              cout << endl;}
//     return 0;
// }






// #include <iostream>
// using namespace std;
// int main() {
// int n=4; 
// int cnt=1;

// for(int i=1;i<=n;i++){

//     for(int j=1;j<=i-1;j++){
//                cout<<" ";}
//     for(int z=1;z<=n-i+1;z++){
//             cout<<cnt;}
//             cnt++;
//        cout <<endl;
//     }
  
//     return 0;
// }






// PYRAMID
#include <iostream>
using namespace std;
int main() {
int n=4; 


for(int i=1;i<=n;i++){
int cnt=1;
    for(int j=1;j<=n-i;j++){
               cout<<" ";}
    for(int z=1;z<=i;z++){
            cout<<z;}
           
    int a = i-1;        
    for(int x=1;x<=i-1;x++){
        cout<<a;
        a--;}

       cout <<endl;
    }

return 0; }
