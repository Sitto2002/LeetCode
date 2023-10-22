#include <bits\stdc++.h>
using namespace std;
#define m 3
#define n 3

void Rotate(int a[m][n]){

   for (int i=0;i<m;i++){
    for (int j=i+1;j<n;j++){
        swap(a[i][j],a[j][i]);
    }
   }

    int start =0, end=m-1;
    while(start<end){
        for(int i=0; i<n; i++){
            swap(a[i][start],a[i][end]);
        }
        start++; end--;
    }

}  

int main(){

    int a[m][n] = { {1,2,3},
                    {5,6,7},
                    {9,10,11} };
    Rotate(a);
    for (int i=0;i<m;i++){
    for (int j=0;j<n;j++){
       cout << a[i][j] <<" ";
    } cout << endl;
   }
return 0;
}