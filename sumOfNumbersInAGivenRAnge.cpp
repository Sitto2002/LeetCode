#include <iostream>
using namespace std;
                   
int main(){
    int i,j,sum=0;
    cout << "ente the initial and the final values of the range " ; cin >> i >> j ;
    for (int s=i ; s<=j; s++){
        sum += s;
    } cout << sum;
return 0;
}