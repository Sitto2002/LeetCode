#include <bits\stdc++.h>
using namespace std;

void MaxWater(int arr[], int n){
   int reserve = 0;

   for (int i=1; i<n-1; i++){
    int left = arr[i];
   for (int j=0; j<i; j++){
    left = max(left,arr[j]);
    }

    int right = arr[i];
   for (int j=i+1; j<n; j++){
    right = max(right,arr[j]);
    }
    reserve = reserve + (min(left,right) - arr[i]);
   }
    cout << reserve;
}

int main(){
    int arr[] = {1,0,3,0,4,0,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;
    //  LargestSum( arr, n);
    MaxWater(arr,n);
    
return 0;
}