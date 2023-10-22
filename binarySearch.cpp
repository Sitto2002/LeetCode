#include<iostream>
using namespace std;

bool binarySearch(int *arr, int s , int e , int search){

     if(s>e){
         return false;
     }

     int mid = (e-s)/2;

     if ( arr[mid] == search ){
         return true;
     }
     if ( arr[mid] < search){
         return binarySearch(arr , mid+1 , e , search);
     }else {
         return binarySearch(arr, s , mid-1 , search);
     }
}

int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int n = 8;
    int search = 6;
    int s = 1;
    int e = 8;
    int ans = binarySearch(arr,s,e,search);
    cout << ans;
     return 0;
}