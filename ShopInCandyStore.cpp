#include <bits/stdc++.h>
using namespace std;

int findMin (int arr[], int n, int k) {
    int res = 0;
    for (int i=0; i<n; i++){
        res += arr[i];
        n = n-k;
    }
    return res;
}   

int findMax (int arr[], int n, int k) {
    int res = 0 , index =0;
    for (int i=n-1; i>=index; i--){
        res += arr[i];
        index += k;
    }
    return res;
}

int main(){
    int arr[] = {3,2,1,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    sort (arr, arr+n);
    cout << findMin(arr,n,k) <<endl;
    cout << findMax(arr,n,k) << endl;
return 0;
}