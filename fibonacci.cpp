#include <bits/stdc++.h>
using namespace std;

void fib (int n) {
    int a=0, b=1;
    for(int i=0; i<=n; i++){
        int sum = a+b;
        cout << sum <<" ";
        a = b;
        b = sum;
    }
}

int main () {
    fib (10);
}
