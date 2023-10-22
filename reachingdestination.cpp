#include<iostream>
using namespace std;

void reach ( int src , int dest){
    cout << "source " << src << " destination " << dest <<endl; 
     if ( src == dest ){
         cout << " aa gye !!! ";
          return ;
     } else {
         src ++; 
         reach( src, dest );
     }
}
int main(){
int src = 1;
int dest = 15;
reach(src , dest);
     return 0;
}