#include <bits\stdc++.h>
using namespace std;

int palindrome (int arr[], int size) {
    int start= 0, end = size-1;
    int count = 0;
    while (start < end) {
        if(arr[start] = arr[end]){
            count ++;
            start++;
            end--;  
        } else {
            cout << "Not a Palindrome";
        }
    } 
    cout <<  count;
}   

int main(){
    int arr[] = {1,2,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    palindrome(arr,size);
return 0;
}