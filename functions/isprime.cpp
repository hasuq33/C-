#include<iostream>
using namespace std;

bool isPrime(int n ){
    if (n ==1) return true;
    if (n ==0) return false;

    for(int i =2; i<10; i++){
        if(n==i )continue;
        if(n%i == 0) return false;
    }

    return true;
}

int main(){
   cout<< isPrime(4);
}