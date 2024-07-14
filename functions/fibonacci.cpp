#include<iostream>
using namespace std;

int fibonaciTerm(int n){
    if (n <= 0) return 0;
    if (n == 1) return 1;

    int n1 =0;
    int n2=1;
    int ans;

    for(int i=2; i <=n ; i++){
        ans = n2+n1;
        n1 = n2;
        n2 = ans;
    }

    return ans;
}

int main(){
    int n=5;

    cout << fibonaciTerm(n);
}