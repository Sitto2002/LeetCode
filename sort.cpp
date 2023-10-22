#include <bits\stdc++.h>
using namespace std;

void Sort(int arr[], int n){
    int count_0 = 0, count_1 = 0, count_2 = 0;
    for (int i=0; i<n; i++){
        if (arr[i] == 0){
            count_0++;
        } else if ( arr[i] == 1){
            count_1++;
        } else {
            count_2++;
        }
    }
    int i=0;
    while (count_0--){
        arr[i++] = 0;
    }
    while (count_1--){
        arr[i++] = 1;
    }
    while (count_2--){
        arr[i++] = 2;
    }
}   

int main(){
    int arr[] = {1,0,2,0,1,2,1,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;
    Sort(arr, n);
    for (int i=0; i<n;i++){
        cout << arr[i] << " ";
    }
return 0;
}