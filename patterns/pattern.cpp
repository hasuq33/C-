#include<iostream>
using namespace std;

void simpalPyramid(int n){
        for(int i=0; i<n;i++){
         for(int j=0; j<=i ; j++){
            cout<<"*"<<" ";
        }
        cout<< endl;
    }
}

void flippedPyramid(int n){
    for(int i= n; i>0; i-- ){
        for(int j=0;j<i;j++){
            cout<<"*"; 
        }
        cout<< endl;
    }
}

int main(){
    int n =5 ;
    
    flippedPyramid(n);
}