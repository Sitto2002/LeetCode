#include <bits/stdc++.h>
using namespace std;
 
int LongestSubsequence(int arr[], int n)
{
    int ans = 0, count = 0;
    sort(arr, arr + n);
 
    vector<int> v;
    v.push_back(arr[0]);

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1])
            v.push_back(arr[i]);
    }

    for (int i = 0; i < v.size(); i++) {
        if (i > 0 && v[i] == v[i - 1] + 1)
            count++;
        else
            count = 1;
        ans = max(ans, count);
    }
    return ans;
}  

// int LongestSubsequence (int arr[], int n){ // Hash Map
//     unordered_set<int> s;
//     int ans =0;
//     for (int i=0; i<n; i++){
//         s.insert(arr[i]);
//     }

//     for (int i=0; i<n; i++){
//         if (s.find(arr[i] - 1) == s.end()) {
//             int j = arr[i];
//             while (s.find(j) != s.end()){
//                 j++;
//             ans = max(ans, j-arr[i]);
//             }
//         }
//     }
//     return ans;
// }  

int main(){
    int arr[] = {1,2,2,3 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Longest Consecutive Subsequence is " << LongestSubsequence(arr, n) ;
return 0;
}