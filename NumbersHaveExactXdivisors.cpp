#include <bits/stdc++.h>
using namespace std;

int FindRoots(int n, int x){
   int count = 0;
   for (int i=0; i<=n; i++){
    int count_factors = 0;
    for (int j=i; j<=sqrt(i); j++){
        if (i%j == 0){
            if (i/j != j){
                count_factors += 2;
            } else {
                count_factors++;
            }
        }
    }
    if (count_factors == x){
        count++;
    }
   }
   cout << count;
} 

int main(){
    int n=7, x=2;
    cout << FindRoots(n, x);
return 0;
}