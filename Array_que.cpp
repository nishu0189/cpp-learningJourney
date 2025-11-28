
/*1. Find the unique no. when every element have same ele in array except one arr ele*/

// #include <iostream>
// using namespace std;

// int unique(int arr[],int n){
//     for(int i=0;i<n;i++){
// bool isunique = true;
     
     
//      for(int j=0;j<n;j++){

//     if(i!=j && arr[i]==arr[j]){
//        isunique = false;
//        break; }
//     }

// if(isunique) return arr[i];

//     }
// } 



// int main() {
//     int arr1[9] = {3,4,2,1,10,3,1,4,2};
//     cout<<"Unique element in array: ";
//     cout<<unique(arr1,9);
//     return 0;
// }


/*1. OR BETTER APROACH USING BIT OPERATOR */

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