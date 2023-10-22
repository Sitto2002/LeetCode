#include <bits/stdc++.h>
using namespace std;
                   
int main(){
    int num, num2=0;
    cout << "Enter the number : " << endl;
    cin >> num;
    if (num == 0){
        num2 = 1;
    }
     while (num > 0)
     {
        int rem = num%10;
        if(rem == 0){
            rem = 1;
        }
            num = num/10;
            num2 = num2*10+rem;
     }

        num = 0;
        while (num2 > 0){
             int r = num2%10;
             num = num*10+r;
             num2 /= 10;
        }
        cout << " Converted Number is : " << num;
return 0;
}