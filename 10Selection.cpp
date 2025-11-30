// #include <iostream>
// using namespace std;

// void SelSort(int arr[],int n){

//     for(int i=0;i<n-1;i++){
//         int mini =i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[mini]){
//                 mini = j;
//             }
//         }
//         swap(arr[mini],arr[i]);
//     }
// }

// void printArr(int arr[],int n){
//     for(int i =0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main() {
//  int arr[7] = { 22,48,1,33,2,0,10}   ;
// cout<<"Array before sorting: ";
// printArr(arr,7);

// cout<<"\n Array after Selection : ";
//  SelSort(arr,7);
//  printArr(arr,7);
//     return 0;
// }


/*BUBBLE SORT*/

// #include <iostream>
// using namespace std;
// void BubbleSort(int arr[],int n){

//     bool Swapped =false;
// for(int i =0;i<n;i++){
//     for(int j =0;j<n-i;j++){
// if(arr[j]>arr[j+1]){
//     swap(arr[j],arr[j+1]);
//     Swapped = true;
// }
//     }
// if(Swapped == false){ // this means array is already sorted
//     break;
// }    
//     }


// }

// void printArr(int arr[],int n){
//     for(int i =0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }



// int main() {
// int arr[7] = { 22,48,1,33,2,0,10}   ;
// cout<<"Array before sorting: ";
// printArr(arr,7);

// BubbleSort(arr,7);
// cout<<"\n Array after Selection : ";   
// printArr(arr,7);

//     return 0;
// }  


/*INSERTION SORT*/


#include <iostream>
using namespace std;

void insertion_sort(int arr[],int n){

    for(int i = 1;i<n;i++){
        int curr_val = arr[i];

        int j = i-1;
        while(j>=0 && arr[j]> curr_val){
            arr[j+1] = arr[j];
            j--;
        }
    arr[j+1] = curr_val;
    }
}

void printArr(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main() {

    int arr[7] = { 22,48,1,33,2,0,10}   ;
cout<<"Array before sorting: ";
printArr(arr,7);

insertion_sort(arr,7);
cout<<"\nArray after Sorting : ";   
printArr(arr,7);
    return 0;
}