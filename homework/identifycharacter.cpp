#include<iostream>
using namespace std;

int main(){
    char a;
    cin >> a;

    if(a >= 'A' && a <= 'Z'){
        cout<< a<<" is a uppercase letter"<<endl;
    }else if( a >= 'a' && a <= 'z' ){
        cout<< a<<" is a lowercase letter"<<endl;
    }else if( a >= '0' && a <= '9' ){
        cout << a<<" is a digit"<<endl;
    }
}