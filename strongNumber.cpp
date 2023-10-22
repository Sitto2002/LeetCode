#include <iostream>
using namespace std;

int factor(int n){
    int fact = 1;
   for (int i=1; i<=n; i++){
    fact = fact*i;
   } 
   return fact;
}

 int isStrong(int n){
    int sum =0;
    int temp = n;
    while ( temp !=0 ){
        int rem = temp % 10;
        sum = sum+factor(rem);
        temp /= 10;
    }
    return sum == n;
 }  

int main(){
    int n; cout << " Enter the number for which u wan to find factors "; cin >> n;
    if (isStrong(n)){
        cout << n << " is a Strong Number";
    } else {
        cout << n << " is not a Strong Number";
    }
return 0;
}