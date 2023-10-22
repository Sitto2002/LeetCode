#include <iostream>
using namespace std;

 int perfectNumber(int n){
    int sum =0;
    for (int i=1; i<n; i++){
        if ((n%i) == 0){
            sum = sum + i;
        }
    }
        if (sum == n){
            cout << n << " is a Perfect Number";
        } else {
            cout << n << " is not a Perfect Number";
        }
    return sum == n;
 }  

int main(){
    int n; cout << " Enter the number for which u wan to check "; cin >> n;
    perfectNumber(n);
return 0;
}