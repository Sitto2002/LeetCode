#include <iostream>
using namespace std;

int reverse (int n){
   int reverse = 0;
    while (n != 0){
        int rem = n%10;
        reverse = reverse* 10 + rem;
        n = n/10;
    } cout << reverse << " is the reversed";
}   

int main(){
    int n; cout << " Enter the number "; cin >> n;
    reverse (n);
return 0;
}