#include<iostream>
using namespace std; 

int countDistinctWayToCimb(long long nStairs){
    if(nStairs < 0){
        return 0;
    }

    if(nStairs ==0) return 1;

    return countDistinctWayToCimb(nStairs-1) + countDistinctWayToCimb(nStairs-2);
}

int main(){
    int n =5;
    cout << countDistinctWayToCimb(n);
}