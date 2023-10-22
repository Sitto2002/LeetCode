#include<iostream>
using namespace std;

int power(int a, int b){
    int ans;
if( b == 0){
    return 1;
}
if( b == 1){
    return a;
}else {
     ans = power(a,b/2);
}

if(b%2 ==0 ){
    return ans*ans ;
}else {
    return a*ans*ans;
}
}

int main(){
    int a,b;
    cout << "ntr the values of a and b : ";
    cin >> a >> b ;
    int ans = power(a,b);
    cout << ans;
    return 0;
}