#include <bits\stdc++.h>
using namespace std;

// void LargestSum(int arr[], int n){
//    int ad = INT_MIN;
//    for (int i=0; i<n; i++){
//     int sum = 0 ;
//     for (int j=i; j<n; j++){
//      sum += arr[j];
//      ad = max(sum, ad);
//     }
//     }
//     cout << ad ;
// }  

void Kadane(int arr[], int n){
   int max_sum = INT_MIN;
   int curr_sum = 0;
   for (int i=0; i<n; i++){
    curr_sum += arr[i];
    if (max_sum < curr_sum){
     max_sum = curr_sum;
    }
    if (curr_sum < 0){
    curr_sum = 0;
    }
    }
    cout << max_sum ;
}  

int main(){
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;
    //  LargestSum( arr, n);
    Kadane(arr,n);
    
return 0;
}