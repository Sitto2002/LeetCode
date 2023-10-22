#include <bits/stdc++.h>
using namespace std;

// void subsetSums(int arr[], int n){
//     long long total = 1 << n;

//     for (long long i =0; i < total; i++){
//         long long sum = 0;
//         for (int j =0; j < n; j++){
//             if (i & (1 << j))
//             sum += arr[j];
//         }
//         cout << sum << " ";
//     }
// }

void subsetSums(int arr[], int l, int r, int sum=0){
   if (l > r){
    cout << sum << " ";
   } else {
    subsetSums(arr, l+1, r, sum+arr[l]);
    subsetSums(arr, l+1, r, sum);
   }
}

int main(){
    int arr[] = {4,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    subsetSums(arr,0, n-1);
return 0;
}