#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int i = n;
    while(i>0){
        
        for(int space = 0; space <n-i; space++){
            cout<<"  "; 
        }
        int j = i;
        while(j>0){
            cout <<n-i+1<<" " ;
            j--;
        }
        cout << endl;
        i--;
    }
}