#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second ;
}
void maxMeetings (int start[], int finish[], int N){
    sort(start,start+N);
    vector<pair <int,int> > v;
    for(int i=0; i<N; i++){
        pair <int, int> p = make_pair(start[i], finish[i]);   
        v.push_back(p);
    }

    sort(v.begin(), v.end(), cmp);

    int count = 1;
    int ansFinish = v[0].second ; 

    for (int i=1; i<N; i++) {
        if(v[i].first > ansFinish){
            count++;
            ansFinish = v[i].second;
        }
    }
    cout << count+1;
} 

int main(){
    int start[] = {1,3,0,5,8,5};
    int finish[] = {2,4,6,7,9,9};
    int N = sizeof(start)/sizeof(start[0]);
    maxMeetings(start,finish,N);
return 0;
}