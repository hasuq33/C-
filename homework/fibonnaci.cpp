#include<iostream>
using namespace std;

int main(){
    int n= 10;
    int num1 = 0; 
    int num2 = 1; 
    for(int i=0; i<n; i++){
        cout<< num1 << endl;
        int temp = num2;
        num2 += num1;
        num1 = temp;
    }
}