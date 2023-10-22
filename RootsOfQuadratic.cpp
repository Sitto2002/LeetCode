#include <bits/stdc++.h>
using namespace std;

void FindRoots(int a, int b, int c){
    if ( a== 0){
        cout << "Invalid"<< endl;
        return;
    }
    int d = b*b - 4*a*c ; 
    double sqrt_val = sqrt(abs(d));
    if (d>0){
        cout << "The roots are real and distinct" << endl;
        cout << (double) (-b + sqrt_val) / (2 * a) << "\n" << (double) (-b -sqrt_val) / (2*a); 
    } else if ( d==0){
        cout << "Roots are real and same " << endl;
        cout << - (double) b/ (2*a);
    } else {
        cout << "Roots are complex \n";
        cout << -(double) b/ (2*a) << " + i" << sqrt_val << -(double) b / (2*a) << " -i" << sqrt_val;
    }
}                   
int main(){
    int a =1, b=4, c=4;
    FindRoots(a,b,c);
return 0;
}