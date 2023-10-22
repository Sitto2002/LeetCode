#include <bits/stdc++.h>
using namespace std;
                   
int main(){
    int n = 74153477;
    int d = 7;
    int count = 0;

    while (n) {
        int rem = n%10;
        if (rem == d){
            count++;
        } 
        n = n/10;
    }
    cout << count;
return 0;
}