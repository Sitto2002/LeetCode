#include <iostream>
using namespace std;

 int HarshadNumber(int n){
    int sum =0;
    int temp = n;
    while (temp != 0) {
       sum = sum + temp % 10;
            temp /= 10;
        }
    return n % sum == 0;
 }  

int main(){
    int n; cout << " Enter the number for which u wan to check "; cin >> n;
    if( HarshadNumber(n) ) {
        cout << n << " is a Harshad Number";
    } else {
        cout << n << " is not a Harshad Number";
    }
return 0;
}