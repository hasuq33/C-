#include<iostream>
using namespace std;

string arr[10] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight","nine"};

void saysDigits(int n){
    if(n==0) return;
    int digit = n%10;
    n = n/10;
    saysDigits(n);
    cout << arr[digit] << " "; 
}
int main(){
    saysDigits(1002);
}