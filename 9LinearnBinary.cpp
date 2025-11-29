/*1. Linear Search */

// #include <iostream>
// using namespace std;

// bool LinearSearch(int arr[], int n, int key){

//     for(int i=0;i<n;i++){

//         if(key == arr[i]){
//         return 1; }
//     }
//     return 0;
// }

// int main() {
   
//     int arr[10]= {3,15,8 ,17, 66, 100,39,33,1,27 };

//     cout<<"Enter the key to be search in array: ";
//     int key;
//     cin>>key;

//     bool ans = LinearSearch(arr,10,key);
    
//     if(ans){
//         cout<<"Yes key is present"<<endl;}
//     else 
//          cout<<"Not present ";
//     return 0;
// }







/*1. BINARY SEARCH*/

// #include <iostream>
// using namespace std;

// bool binary_search(int arr[],int n, int key){
// int s=0, m= n/2, e=n-1;

// while(s<=e){


// if(arr[m] == key) return true;

// else if(arr[m]<key){
//     s=m+1; }

// else { e =m-1;}

// m=(s+e)/2;
// }

// return 0;
// }



// int main() {
 
//     int arr[8] = {3,6,8,15,34,40,47,51};
    
//     // bool ans = binary_search(arr,8,40);
// int key = 40;
//     if(binary_search(arr,8,key)) { cout<<key<<" Key is Found";}

//     else cout<<key<<" Key is Absent";
//     return 0;
// }






/*2. Binary search finding index of key*/

// #include <iostream>
// using namespace std;

// int binary_search(int arr[],int n, int key){
// int s=0, e=n-1;

// while(s<=e){
// int m= (s+e)/2;

// if(arr[m] == key) return m;

// else if(arr[m]<key){
//     s=m+1; }

// else { e =m-1;}
// }

// return -1;
// }




// int main() {
 
//     int arr[8] = {3,6,8,15,34,40,47,51};
    
//     // bool ans = binary_search(arr,8,40);
// int key = 40;
// int index_key = binary_search(arr,8,key);
// cout<<" Index of key "<<key <<" is "<< index_key;


// }



/*3. FIND THE PEAK VALUE (HIGHEST VALUE IN MOUNTAIN ARRAY)*/
// #include <iostream>
// using namespace std;

// int binary_search(int arr[],int n){
// int s=0, e=n-1;

// while(s<=e){
//         int m = s+(e-s)/2;

// if(arr[m] > arr[m-1] && arr[m] > arr[m+1]) return m;
// else if(arr[m] < arr[m+1]) s=m+1;
// else e=m;}   
//      return -1;
// }

// int main() {
// int arr[6] = {0, 5, 4, 3, 2, 1} ;  // valid mountain
// cout<<"Peak index is: ";
// cout<<binary_search(arr,6);

// cout<<"\n Peak index is: ";
// int arr1[3] = {0, 2, 1};
// cout << binary_search(arr1, 3);
// }

/*4. Find the pivot element */

// #include <iostream>
// using namespace std;

// int pivot(int arr[],int n){

//         int s =0;
//         int e = n-1;
      
// int m =0;

// while(s<e){
// m = s+(e-s)/2;
// if(arr[m]>arr[0]){
//         s =m+1;
// }
// else e =m;
// }

// return s;
// }


// int main() {
       
//     int arr[6] = {7,8,9,1,2,3};
//     cout<<"Pivot of the array "<<pivot(arr,6);
//     return 0;

// }



/*FIND THE SQRT ROOT IN O(logn)*/
/*
#include <iostream>
using namespace std;

int SqrtInteger(int n ){
long long int ans=0;
    int s =0;
    int e = n;

    while(s<=e){
    long long int m = s +(e-s)/2;
long long int r= m*m; 
    if(n==r) return m;
    else if(r<n) {
        ans =m;
        s=m+1;
    }
    else e =m -1;
}
return ans;
}


double MorePrecision(int n,int precision,int tempSol ){
double factor =1;
double ans = tempSol; //ans = for 36 is 6
for(int i =0;i<precision;i++){
        factor = factor/10;  // 0.1 -> 0.01 -> 0.001
        for(double j=ans;j*j<n;j=j+factor){
ans=j ; //6
        }
}
return ans;
}


int main() {
    int n;
    cout<<"Enter a No. :- ";
    cin>>n;

    int tempSol = SqrtInteger(n);
    cout<<"Answer is "<<MorePrecision(n,3,tempSol);
    return 0;
}*/