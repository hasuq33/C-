#include<iostream>
using namespace std;

int getSum(int arr[] , int size){
    if(size == 0) return 0;
    return arr[size-1] + getSum(arr, size-1);
}

int main(){
    int arr[3] = {1,2,3};
    cout << getSum(arr , 3);
}