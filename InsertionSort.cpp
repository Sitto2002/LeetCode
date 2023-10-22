#include <bits/stdc++.h>
using namespace std; 

 void Insertion (vector<int> &v, int n){
    int key, j;
      for (int i=1; i<n; i++){
        key = v[i];
        j = i-1;
        while (j>=0 && v[j] > key) {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
      }
 }

 void printArray(vector<int> v, int n){
    int i=0;
    while( i < n){
        cout << v[i] << " ";
        i++;
    } cout << endl;
}

int main () {
    vector<int> v{4,2,3,1,7,5,6,8,0,9};
    printArray(v,v.size());
    Insertion(v,v.size());
    printArray(v,v.size());
}