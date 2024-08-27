#include<iostream>
using namespace std;

void fibonacci(int term){
    int ans = 0;
    int n1 = 1;
    int prev=n1;
    for(int i =0 ; i< term ; i++){
         n1 = ans;
        ans =prev + n1;
        prev = n1;
    }

    cout << ans << endl;
}

 int fib(int n) {
    if( n==0) return 0;
    if(n==1) return 1;
    return fib(n-1)+ fib(n-2);
}

int main(){
    int term = 5;
    fibonacci(term);
    cout << fib(term) << endl;
}