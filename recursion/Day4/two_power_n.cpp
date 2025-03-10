#include<iostream>
using namespace std; 

int power(int x, int y){
    // for power y = 0 retuns 1
    if(y==0) return 1;

    int ans = power(x, y/2);

    if(y%2 ==0){
        return ans*ans;
    }else{
        return x*ans*ans;
    }
}

int main(){
    cout <<power(2,3);
    return 0;
}