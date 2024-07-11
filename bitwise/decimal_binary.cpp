#include<iostream>
#include<math.h>
using namespace std;

int decimalBinanry(int n){
     int ans = 0;

    int i = 0;
    while( n != 0){
        int bit =  n & 1;
        ans = (bit * pow(10,i)) + ans; //Using Bit Here We are Forming the Bit Digit 
        n = n >> 1;
        i++;
    }
    return ans;
}

int main(){
    int n = 526;
    if( n < 0){

        int ans = decimalBinanry(n*(-1));
        cout << ~ans +1 << endl;
    }else{
        cout << decimalBinanry(n) << endl;
    }
}