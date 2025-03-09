#include<iostream>
using namespace std;

int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    int ans = fib(n-1) + fib(n-2);
    return ans;
}

int fibonacciLoop(int term){
    int n1=0;
    int n2=1;
    int ans;

    for(int i=0; i <= term ;i++){
        ans = n1;
        n1 = n2;
        n2 = ans+n1;
    }

    return ans; 
}

int main(){
    // cout << fibonacciLoop(5)<< endl;
     fib(5);
}