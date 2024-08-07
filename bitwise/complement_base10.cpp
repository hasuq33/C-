#include<iostream>
using namespace std;

int bitwiseComplement(int n){
    int m = n ;
    int mask = 0;
    
    // edge Case 
    if(n == 0 ) return 1 ;
    while(m !=0 ){
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    int ans = (~n) & mask;
    return ans;
}

int main(){
    int n = 5;
    cout << bitwiseComplement(n) << endl;
}