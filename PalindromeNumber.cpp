#include <iostream>
using namespace std;

int reverse (int n){
    int temp = n;
   int opp = 0;
    while (temp != 0){
        int rem = temp % 10;
        opp = opp * 10 + rem;
        temp = temp/10;
    } 

     if ( n == opp) {
        cout << n << " is Palindrome";
     } else {
        cout << n << " is not Palindrome";
     }
} 

int main(){
    int n;
    cout << "enter the number " ; cin >> n ;
    reverse(n);
return 0;
}