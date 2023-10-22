#include <iostream>
using namespace std;
                   
int main(){
    int x; int sum =0; cout << "Enter the value upto which u want to sum "; cin >> x;
    for (int i=0; i<=x; i++){
        sum += i; 
    } cout << "The sum is " << sum;
return 0;
}