#include <bits/stdc++.h>
using namespace std;

int fib1(int n, vector<int> &dp){
    if (n ==1 || n==0)
        return n;

    if (dp[n] != -1)
        return dp[n];

        dp[n] = fib1(n-1, dp) + fib1(n-2, dp);
        return dp[n];
}     

int fib2(int n, vector<int> &dp){

    dp[0] = 0;
    dp[1] = 1;

    for (int i=2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
        return dp[n];
} 

int main(){
    int n; cin >> n;
    vector<int> dp(n+1);
    for (int i=0; i<=n; i++){
        dp[i] = -1;
    }
    cout << fib1(n, dp) << endl;
    cout << fib2(n, dp) << endl;
return 0;
}