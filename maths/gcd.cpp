#include<iostream>
using namespace std;

// This is the eculidian ALgorithm 
// Time Conplexity Both = O(log(min(x,y))) , space Complexity = O(log(min(x,y)))
int gcdRcursion(int x, int y){

    if(x==y) return x;

    if( x == 0) return y;

    if( y== 0 ) return x;

    if(x > y){
        if( x%y == 0) return y;
        return gcdRcursion(x-y , y);
    } 
    else{ 
        if(y%x == 0 ) return x;
        return gcdRcursion(x , y-x);}
}


// Time Conplexity Both = O(min(x,y)) , space Complexity = O(1)
int gcd(int x, int y){
    if(x ==y) return x;

    int result = min(x,y);

    while(result > 0){
        if(x%result == 0 && y%result == 0) break;
        result--;
    }

    return result;
}

int main(){
    int a = 28;
    int b= 20;

    cout << gcd(a,b) << endl;
    cout << gcdRcursion(a,b) << endl;
}