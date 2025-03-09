#include<iostream>
using namespace std;

int power(int n){
    // Base case
    if(n==0)return 1;

    return 2*power(n-1);
}

// 2power->n
int main(){
    int n=2; 
    cout << power(n) << endl;
}