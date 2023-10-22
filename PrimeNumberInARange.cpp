#include <iostream>
using namespace std;

int findPrime (int i, int j) {
    for (int s=i;s<=j;s++){
        bool prime = true;
    for ( int h = 2 ; h <= s/2 ; ++h ){
        if ((s%h) == 0 ){
            prime = false;
            break;
        }
    }
    if (prime == true) {
        cout << s << " is Prime " << endl;
    } 
    }
}
                   
int main(){
    int i,j; cout << "Enter the given range "; cin >> i >> j ;
    findPrime(i,j);

return 0;
}