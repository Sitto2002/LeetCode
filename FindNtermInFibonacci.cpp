#include <iostream>
using namespace std;

int find(int f){
    if (f <= 1) {
        return f;
    } 
    return find(f-1) + find(f-2);
}  

int fibonacci (int n) {
     int a =0, b=1, temp;
     cout << a << " " << b << " ";
     for (int i=2; i<n; i++){
        temp = a+b;
        a = b;
        b = temp;
        cout << temp << " " ;
} cout << endl;
}

int main(){
     int n,f; cout << "Enter the number u want to print till  " ; cin >> n;
     fibonacci(n);
     cout << " Enter the term u want to find " ; cin >> f ;
      cout << find(f);
return 0;
}