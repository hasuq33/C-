#include<iostream>
using namespace std;

int factorial(int n ){
    if(n<=0) return 1;
    return n * factorial(n-1);
}

int ncr(int n , int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int main(){
    int n=10, r=5;

    cout << ncr(n, r);
}