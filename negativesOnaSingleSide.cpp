#include <bits\stdc++.h>
using namespace std;

void moveAll(int arr[], int n){
   int i = -1;
   int pivot = 0;
   for (int j=0; j<n; j++){
    if (arr[j] < pivot){
        i++;
        swap(arr[i], arr[j]);
    }
   }
}  

int main(){
    int arr[] = {-1,3,-2,4,5,-8,7,-6,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    // sort(arr,arr+n);
    for (int i=0; i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;
    moveAll(arr, n);
    for (int i=0; i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;
    cout << endl;
    
return 0;
}