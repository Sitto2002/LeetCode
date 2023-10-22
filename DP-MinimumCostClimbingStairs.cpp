#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &cost, int n){
       vector<int> dp(n+1, -1);
    if (n==0)
    return cost[0];

    if (n==1)
    return cost[1];

    if (dp[n] != -1)
    return dp[n];


    dp[n] = cost[n] + min(solve(cost, n-1), solve(cost, n-2));
    return dp[n];
}


int main(){
   vector<int> cost ;
   int n = cost.size();

   int ans = min(solve(cost, n-1), solve(cost, n-2));
   return ans;
}