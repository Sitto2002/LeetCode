#include <bits\stdc++.h>
using namespace std;

void checkPerfect(int n){
    if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) {
        cout << "True";
    } else {
        cout << "False";
    }
}
                   
int main(){
     int n; cout << " Enter the number for which u wan to check "; cin >> n;
    checkPerfect(n);
return 0;
}