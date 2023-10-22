#include <bits/stdc++.h>
using namespace std;

// int checkPrime(int n){
//     if (n <= 1){
//         return 0;
//     } else if (n== 2){
//         return 1;
//     } else if (n%2 == 0) {
//         return 0;
//     } else {
//         for (int i=3; i<= sqrt(n); i+=2){
//             if (n%i == 0){
//                 return 0;
//             } return 1;
//         }
//     }
// }

int checkPrime(int n){
    if (n < 2){
        return 0;
    } else {
        for (int i=2; i < sqrt(n); i++){
            if (n%i == 0){
                return 0;
            }
        }
    }  return 1;
}

int main(){
    for (int i=0; i<= 100; i++){ 
    if (checkPrime(i)){
    printf("%d ", i);
    }
}
    return 0;
}