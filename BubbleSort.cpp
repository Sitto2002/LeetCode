#include<iostream>
using namespace std;

void bubble(int *arr, int n){
    if ( n == 1){
        return ;
    } 

    for(int i=0; i<n-1; i++) {
    if (arr[i] > arr[i+1]){
        swap(arr[i],arr[i+1]);
    }
    }
     bubble(arr,n-1);
}

int main (){
    int arr[] = {6,5,4,1,2,3};
    int n = 6;
     for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    bubble(arr,n);
    cout<<endl;
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }

     return 0;
}