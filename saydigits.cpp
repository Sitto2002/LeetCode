#include<iostream>
using namespace std;

void say ( int n ){
         if ( n == 0 ){
         return ;
     }
    while(n != 0){
    int r = n%10;
    n = n/10;
        say(n);
      if ( r == 1 ){
         cout << " Ore ";
break;
}

 if ( r ==2 ){
         cout << " Two ";
         break;
 }

  if ( r ==3 ){
         cout << " Three ";
         break;
 }

  if ( r ==4 ){
         cout << " Four ";
         break;
 }

  if ( r ==5 ){
         cout << " Five ";
break;
 }

  if ( r ==6 ){
         cout << " Six "; 
break;
 }

  if ( r ==7 ){
         cout << " Sever ";
break;
 }

  if ( r ==8 ){
         cout << " Eight ";
break;
 }

  if ( r ==9 ){
         cout << " nine ";
break;
 }
    }
}

int main (){
     int n;
     cout<<"ntr the number";
     cin >> n;
     say(n);
     return 0;
}