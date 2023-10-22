#include<iostream>
using namespace std;

int sum ( int arr[] , int n ){
     if (n <= 0){
        return 0;
     } 
     else {
     return (sum (arr,n-1) + arr[n-1]);
     }

}
int main (){
    int arr[] = {3,2,5,1,6};
    int n = 5;
    int ans = sum (arr,n);
    cout << ans ;
     return 0;
}