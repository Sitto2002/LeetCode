#include <iostream>
using namespace std;

void printarray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i] << " ";
    }cout<<endl;
}

void swap_alternate(int arr[], int n){
for(int i=0; i<n-1; i++){
   swap(arr[i], arr[i+1]);
   i++;
   }cout<<endl;
}

int main(){
int arr[5],n=5;
cout<<"ntr the elements : ";
for(int i=0; i<n; i++){
 cin>> arr[i];
}
printarray(arr,n);
swap_alternate(arr,n);
printarray(arr,n);
return 0;
}