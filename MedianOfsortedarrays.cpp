#include <bits\stdc++.h>
using namespace std;

void merge(int arr[], int m,int brr[], int n, int crr[]) {
    int i,j,k;
    i = j = k = 0;
        while (i < m){
            crr[k++] = arr[i++];
        }
        while (j < n ){
            crr[k++] = brr[j++];
        }
        sort(crr,crr+m+n);
   }
                   
int main(){
    int arr[] = {1,2,3,4,6};
    int m = sizeof(arr)/sizeof(arr[0]);
    int brr[] = {10,9,8,15,31,22};
    int n = sizeof(brr)/sizeof(brr[0]);
    int crr[m+n];
    merge(arr,m,brr,n,crr);
    for (int s=0; s<m+n; s++){
        cout << crr[s] << " " ;
    } cout << endl;
     if ((m+n)%2 == 0){
        cout << "Median is " << crr[(m+n)/2];
     } else {
        cout << "Median is " << crr[(m+n)/2];
     }
return 0;
}


   