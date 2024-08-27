#include<iostream>
using namespace std;

int powerOftwo(int n, int power ){
    if(power <=1) return n;
    return powerOftwo(n , power-1)*n; 
}

int main(){
    int n=3;
    int power = 2;
    cout << powerOftwo(n , power);
}