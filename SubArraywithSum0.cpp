#include <bits/stdc++.h>
using namespace std;
                   
// int getSubArray(int arr[], int n){
//     int flag = 0, sum;

//     for (int i=0; i<n; i++){
//         for (int j=i; j<n; j++){
//             sum += arr[j];
//             if (sum == 0){
//                 flag = 1;
//                 break;
//             }
//         }
//     }
//     if (flag == 1){
//         cout << "true" << endl;
//     } else {
//         cout << "false" << endl;
//     }
// }

int getSubArray(int arr[], int n){
    int flag =0, sum =0;

    set<int>st;

    for (int i=0; i<n; i++){
            sum += arr[i];
            if (sum == 0 ||  st.find(sum) != st.end()){
                flag = 1;
                break;
        }
        st.insert(sum);
    }
    if (flag == 1){
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}

int main(){
    int arr[] = {-3,2,3,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << getSubArray(arr, n);
return 0;
}