#include <iostream>
using namespace std;

void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<< arr[i] <<" ";
    }cout<<endl; 
}  

void merge( int arr[], int low, int high, int mid){
int i,j,k,c[5];
i = low;
k = low;
j = mid+1;
while(low<=mid && mid+1<=high){
    if(arr[low] < arr[mid+1]){
        c[low++] = arr[low++];
    }else{
        c[low++] = arr[(mid+1)+1];
    }
}
while(i <= mid){
    c[k] = arr[i];
    k++;
    i++;
}

while(j <= high){
    c[k] = arr[j];
    k++;
    j++;
}
for(i = low; i<k; i++){
    arr[i] = c[i];
}
}

void merge_sort(int *arr, int low, int high){
int mid; 
if(low < high){
    mid = (low+high)/2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid+1, high);
    merge(arr,low,high,mid);
}
}
int main(){
int n , arr[5];
cout<<"Entr the lenth of array: ";
cin>>n;
cout<<"Entr the elements: ";
for(int i=0; i<n; i++){
    cin>> arr[i]; 
}
printarray(arr,n);
merge_sort(arr,0,n-1);
printarray(arr,n);
return 0;
}
