// #include <bits/stdc++.h>
// using namespace std;

// void printArray(int arr[], int size) {
//     for (int i =0; i<size; i++){
//         cout << arr[i] << " ";
//     } cout << endl;
// }  

// void Rotate(int arr[], int d, int n) {
//     int p = 1;
//     while (p <= d) {
//         int last = arr[0];
//     for (int i=0; i<n-1; i++){
//         arr[i] = arr[i+1];
//     }
//     arr[n-1] = last;
//     p++;
// }
// }

// int main(){
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int d = 2;
//     printArray(arr,n);
//     Rotate(arr,d,n);
//     printArray(arr,n);

// return 0;
// }

// OR

#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size) {
    for (int i =0; i<size; i++){
        cout << arr[i] << " ";
    } cout << endl;
}  

void Rotate(int arr[], int d, int n) {

   // to store rotated version of array 
   int temp[n];

//    to keep track of current index
   int k =0;

   for (int i=d; i<n; i++){
    temp [k] = arr[i];
    k++;
   }

   for (int i=0; i<d; i++){
    temp [k] = arr[i];
    k++;
   }

   for (int i=0; i<n; i++){
    arr [i] = temp [i];
   }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 2;
    printArray(arr,n);
    Rotate(arr,d,n);
    printArray(arr,n);

return 0;
}
