#include <bits\stdc++.h>
using namespace std;

int MinJumps(int arr[], int n){
   int jumps[n];
   int i,j;
   if(n==0 || arr[0]==0){
    return INT_MAX ;
   } 
   jumps[0] = 0;

   for (int i=1; i<n; i++){
    jumps[i] = INT_MAX;
    for (int j=0; j<i; j++){
     if (i <= j+arr[j] && jumps[j] != INT_MAX){
        jumps[i] = min(jumps[i], jumps[j] + 1);
        break;
     }
    }
    } 
    return jumps[n-1];
}  

int main(){
    int arr[] = {1,3,5,8,9,2,6,7,6,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;
     cout << MinJumps(arr, n);
    
return 0;
}