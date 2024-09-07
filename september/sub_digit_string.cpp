#include<iostream>
#include<string>
using namespace std;

int getLucky(string s, int k ){
    string numberStr = "";

    for(char ch:s){
        // Here is is ascci values suppose l=108 a=97 
        int num = ch - 'a' +1;
        numberStr += to_string(num);
    }

    // Let's transform the value k times 
    int sum;
    for(int i=k; i>0; i--){
        sum=0;
        for(char ch:numberStr){
            sum+=ch-'0';
        }
        numberStr = to_string(sum);
    }

    return sum;
}

int main(){
    string s = "iiii";
    int k = 1;
   cout << getLucky(s,k);
}