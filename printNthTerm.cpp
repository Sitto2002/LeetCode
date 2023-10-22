#include <bits/stdc++.h>
using namespace std;

int term (int calculated, int current, int n){
    int i , cur = 1;
    if (current == n + 1){
        return 0;
    } else {
        for (i = calculated; i < calculated + current; i++){
            cur *= i;
        }
        return cur + term(i, current+1, n);
    }
}   

int main(){
    int n = 3;
    cout << term(1,1,n);
return 0;
}