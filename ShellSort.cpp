#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> v, int n){
    int i=0;
    while( i < n){
        cout << v[i] << " ";
        i++;
    } cout << endl;
}

void Shell(vector<int> &v, int n){
    for (int gap = v.size()/2; gap > 0; gap /= 2) {
        for (int i=gap; i<v.size(); i++) {
            int temp = v[i];
            int j;
            for (j=i; j>=gap && v[j-gap] > temp; j-= gap)
            v[j] = v[j-gap];
            v[j] = temp;
        }
    }
}

int main () {
    vector<int> v{2,4,3,1,7,5,6,8,0,9};
    printArray(v,v.size());
    Shell(v,v.size());
    printArray(v,v.size());
}