#include <iostream>
using namespace std;
                   
int main(){
    int x,y,z; cout << "Enter the values of x , y and z "; cin >> x >> y >> z;
    if (x > y && x > z) {
        cout << x <<" is greatest ";
    } else if (y > x && y > z) {
        cout << y << " is greatest ";
    } else {
        cout << z << " is greatest ";
    }
return 0;
}