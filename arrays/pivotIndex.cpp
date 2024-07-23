#include<iostream>
using namespace std;

int pivotIndex(int arr[] , int size){

    int sum = 0;
    for(int i=0; i < size; i++){
        sum += arr[i];
    }
    int leftmost = 0;
    // Ohh man I have a formula yaar
    for(int i=0; i< size; i++){
        if(sum-arr[i] == leftmost*2){
            return i;
        }
        leftmost += arr[i];
    }

    return -1;

}

int main(){
    int arr[3] = {1,2,3};
    cout << pivotIndex(arr , 3)<< endl;
}