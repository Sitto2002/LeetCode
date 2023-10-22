#include <iostream>
using namespace std;

int sum (int n){
   int sum=0;
    while (n != 0){
        sum += n%10;
        n = n/10;
    } cout << sum << " is the sum";
}   

int main(){
    int n; cout << " Enter the number "; cin >> n;
    sum (n);
return 0;
}