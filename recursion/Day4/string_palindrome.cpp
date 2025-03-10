#include<iostream>
using namespace std;

bool checkPalindrome(int i , string s){
    if(i<0) return true;
    int j = s.size()-(i+1);
    if(s[i] != s[j]){
        return false;
    }

    return checkPalindrome(--i, s);
}

int main(){
    string s = "abcddcba";
    int i = s.size()-1; 
    cout << checkPalindrome(i, s) << endl;
}