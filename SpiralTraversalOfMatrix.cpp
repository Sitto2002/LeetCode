#include <bits\stdc++.h>
using namespace std;
#define m 4
#define n 4

void spiralTraversal(int a[m][n]){
    int left = 0, top =0;
    int right = m-1;
    int bottom = n-1;
    while (left <= right && top <= bottom){
        for (int i=left; i<=right; i++){
            cout << a[top][i] << "->";
        } top++;

        for (int i=top; i<=bottom; i++){
            cout << a[i][right] << "->";
        } right--;

        if(top <= bottom)
        for (int i=right; i>=left; --i){
            cout << a[bottom][i] << "->";
        } bottom--;
        
        if(left <= right)
        for (int i=bottom; i>=top; --i){
            cout << a[i][left] << "->";
        } left++;
    }
}           
int main(){

    int a[m][n] = { {1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16} };
    spiralTraversal(a);
return 0;
}