#include<iostream>
using namespace std;

bool isPrime(int n){
      for(int i=2; i <= n ; i++){
        if(n%2 ==0) return false;
        }
    return true;
}

int main(){
    int n = 3;
    if(isPrime(n)) cout<<"Prime Number";
    else cout<<"Not Prime Number";
}