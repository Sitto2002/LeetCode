#include <bits/stdc++.h>
using namespace std;

int Survival (int S, int M, int N){
    if (((N*6) < (M*7) && S > 6) || M > N){
        cout << "No" <<endl;
    } else {
        int days = (M*S) / N;
        if (((M*S) % N) != 0){
            days++;
            cout << "Yes " << days << endl;
        }
    }
}   

int main(){

int S = 25; //number of days u have to survive;
int M =  5;  //required food units each day to survive;
int N = 32; //maxFoodUnit can buy each day;
Survival(S,M,N);

return 0;
}