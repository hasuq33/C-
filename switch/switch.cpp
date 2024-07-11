#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b =5;

    char n;
    cin >> n;
    

    switch(n){
        case '+':
            cout << a + b;
            break;
        case '-':
            cout << a - b;
            break;
        case '*':
            cout << a * b;
            break;
        case '/':
            cout << a/b;
            break;
        case '%':
            cout << a % b;
            break;
        default:
            cout<< "Sari Umra Mai joker Banta Raha!" << endl;
    }

    
}