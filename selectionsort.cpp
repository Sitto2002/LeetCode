#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> v, int n){
    int i=0;
    while( i < n){
        cout << v[i] << " ";
        i++;
    } cout << endl;
}

void Selection(vector<int> &v, int n){
for(int i=0; i<n-1; i++){
    int minIndex = i;
    for(int j=i+1; j<n; j++){
        if(v[j] < v[minIndex]){
            minIndex = j;
        }
    }
    swap(v[minIndex], v[i]);
}
}

int main () {
    vector<int> v{2,4,3,1,7,5,6,8,0,9};
    printArray(v,v.size());
    Selection(v,v.size());
    printArray(v,v.size());
}

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// void printarray(int arr[], int n){
//     for(int i=0; i<n; i++){
//         cout<< arr[i] <<" ";
//     }cout<<endl; 
// }                  

// void selection_sort(int arr[], int n){
// for(int i=0; i<n-1; i++){
//     int minIndex = i;
//     for(int j=i+1; j<n; j++){
//         if(arr[j] < arr[minIndex]){
//             minIndex = j;
//         }
//     }
//     swap(arr[minIndex], arr[i]);
// }
// }

// int main(){
// int n ;
// cout<<"Entr the lenth of array: ";
// cin>>n;
// int arr[n];
// cout<<"Entr the elements: ";
// for(int i=0; i<n; i++){
//     cin>> arr[i]; 
// }
// printarray(arr,n);
// selection_sort(arr,n);
// printarray(arr,n);
// return 0;
// }