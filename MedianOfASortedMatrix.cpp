#include <bits\stdc++.h>
using namespace std;
#define m 4
#define n 4

void Median(int a[m][n]){
   int arr[16],s=0;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            arr [s++] = a[i][j];
        }
    }
    for (int j=0;j<16;j++){
             cout << arr[j++] << " " ;
        } cout << endl;

    sort(arr,arr+16);
    for (int j=0;j<16;j++){
             cout << arr[j++] << " " ;
        } cout << endl;
        cout << "The median is " << arr[8] ;
} 

int main(){

    int a[m][n] = { {1,2,3,4},
                    {5,6,8,9},
                    {12,15,11,12},
                    {13,14,10,16} };
    Median(a);
return 0;
}