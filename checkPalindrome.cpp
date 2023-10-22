#include<iostream>
#include<string>
using namespace std;

bool check( string& str , int i , int j){
     if ( i > j){
        return true ;
     }

     if(str[i] != str[j]){
        return false;
     }
     else {
        return check(str,i+1,j-1);                                                                                                                                                                                                                                                                                                                                                                                                           
     }
}

int main (){
    string str = "nikkin";
    int i =0;
    int j = str.length();
    cout << str << endl;
    bool isPalindrome = check (str, i , j-1);
    if (isPalindrome) {
        cout << "Palindrome " << endl;
    }else{
        cout << "Not Palindrome " << endl;
    }
     return 0;
}