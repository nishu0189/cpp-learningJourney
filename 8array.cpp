/*1.  Different type of arr*/

// #include <iostream>
// using namespace std;

// void  print(int n, int arr[]){
//     for (int i = 0; i < n; i++){
// cout<<arr[i]<<" ";
//     }
//     cout<<endl;
    
//  }

// int main() {
    
//     int arr1[3] = {1,2,3};
//     print(3,arr1);

//     int arr2[10] = {0};
//     print(10,arr2);

//     int arr3[10] = {1};
//     print(10,arr3);

//     int arr4[10] = {10,20,30};
//     print(10,arr4);
//     return 0;
// }




/*2. max and min element in array*/

// #include <iostream>
// #include <climits>
// using namespace std;


// int MaxEle(int arr[],int n){

// int maxi = INT_MIN;
//     for(int i=0;i<n;i++){
// maxi = max(maxi,arr[i]);
//     }
//     return maxi; }


// int MiniEle(int arr[],int n){
// int mini= INT_MAX;
//     for(int i=0;i<n;i++){
// mini = min(mini,arr[i]); }

// return mini; }    


// int main() {

// int arr[100] ;

// cout<<"Size of array: ";
// int size;
// cin>>size;

// cout<<"Enter the element of array: ";
// for(int i=0;i<size;i++){
//     cin>>arr[i];
// }

// cout<<"Maximum ele in the array: "<<MaxEle(arr,size)<<endl;
// cout<<"Minimum ele in the array: "<<MiniEle(arr,size);

//     return 0;
// }




/*3. Scope of Array*/
 /* as we now in variable if we upadate variable in other function it doesnt update but in array it also update*/

// #include <iostream>
// using namespace std;

// void update(int arr[],int n){  //3. AS it have base address of array so any function like add remove delete change the real array value to

//     cout<<endl<<"Inside the function"<<endl;

//     arr[0] = 120;

//     for (int i = 0; i <n; i++)
//     {
//        cout<<arr[i]<<" ";

//     }cout<<endl;

//     cout<<"Goint back to main functio"<<endl;    
// }

// int main() {

//     int arr[4] = {1,2,3,4};

//     update(arr,4); //2. bcz this call update func give starting base address to the signed update func not the ARRAY

//     cout<<endl<<"Printing in main function"<<endl;
    
//     for (int i = 0; i <4; i++)
//     {
//          cout<<arr[i]<<" ";}  //1. in case of array: value update in  main function to
//     return 0;
// }






/*4. Print the Sum of Array*/


// #include <iostream>
// using namespace std;

// int main() {
 
//     int arr[4] = {5,10,10,30};

//     int sum =0;

//     for(int i=0;i<4;i++){
// sum += arr[i];
//     }
 
// cout<<"Sum of all element of Array: "<<sum;    
//     return 0;
// }


/*5. Reverse Array */

// #include <iostream>
// using namespace std;

// void ReverseArr(int arr[],int n){

//     int s = 0;
//     int e = n-1;

//     while(s<=e){
// swap(arr[s],arr[e]);
// s++ ; e--;
//     }
// }

// void printArray(int arr[],int n){

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }    



// int main() {

//     int arr[5] = {1,2,3,4,5};

//     ReverseArr(arr,5);

//     cout<<"Reverse the Array: ";
//     printArray(arr,5);
    
//     return 0;
// }



// void SwapAlt(int arr[],int n){
//   int s=0;
//     for(int i=0;i<n;i++){

//         if((i+2) <= n ){
//         swap(arr[i],arr[i+1]);
//     i++; 
// }
//    break;





/*SWAP THE ALTERNATE ELEMENT*/


// #include <iostream>
// using namespace std;

// void SwapAlt(int arr[],int n){
//   int s=0;
//     for(int i=0;i<n-1;i+=2){
//         swap(arr[i],arr[i+1]);  
   
// }
// }


// void printArray(int arr[],int n){

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";}
// }

// int main() {
 
// int arr1[6] = {1,2,3,4,5,6};
// int arr2[5] = {1,2,3,4,5};
// cout<<"Swap the alternate number in EVEN Arr \n";
// SwapAlt(arr1,6);
// printArray(arr1,6);

// cout<<"\n Swap the alternate number in ODD Arr "<<endl;
// SwapAlt(arr2,5);
// printArray(arr2,5);
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    
    return 0;
}