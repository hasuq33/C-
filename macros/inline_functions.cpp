#include <iostream>
using namespace std;


// For inline funtions we reduce function calls and no extra usage 
// Compiler add this one line code to getMax before compilations
inline int getMax(int& a , int& b){
    return a>b?a:b;
}

int main(){
    int a =5 , b=2;
    int ans =0;

    ans = getMax(a,b);
    cout << ans << endl;
     
    a =a +3;
    b=b+10;

    ans = getMax(a,b);
    cout << ans << endl;
}