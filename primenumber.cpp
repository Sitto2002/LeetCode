// #include <iostream>
// using namespace std;
                   
// int main(){
//     int n;
//     cout<<"enter the value of n";
//     cin>>n;
// bool isPrime = 1;
// for(int i=2; i<n;i++){
//     if(n%i==0){
//         isPrime = 0;
//         break;
//     }
// }

// if(isPrime == 0){
//     cout<<"Not prime";
// }else{
//     cout<<"prime";
// }
// return 0;
// }

//  OR

#include <bits/stdc++.h>
using namespace std;

void isPrime (int n) {
    for(int i=2; i<=n; i++){
        if(n%i == 0) {
            cout << "Not Prime" <<endl;
            break;
        } else {
            cout << "Prime";
            break;
        } 
    }
}

int main (){
    isPrime(17);
}