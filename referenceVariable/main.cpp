#include<iostream>
using namespace std;

// Bad Practice
int& update1(int x){
    int a = x;
    int &ans = a; 
    return ans; 
}

int* fun(int n){
    int *ptr = &n;
    return ptr;
}

void update(int &n){
    n++;
}

int main(){
    int i = 5; 

    // // Create a ref Variable 
    // int &j = i; //Here i and j pointing same variable 

    // i++; 
    // cout << i << endl; 
    // j++; 
    // cout << i << endl; 

    // update(i);
    // cout <<update1(i);
    // cout << i << endl ;
    update1(i);
}