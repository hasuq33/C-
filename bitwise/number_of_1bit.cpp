#include<iostream>
using namespace std;

int hammingWeight(uint32_t n){
    int count = 0;
    while(n!=0){
        if(n&1){
             count++;
        }
        n = n >> 1;
    }
    return count;
}

int main(){
    int n = 11;

    cout<<hammingWeight(n);
}