#include<iostream>
using namespace std;

bool isElementPresent(int arr[], int lastIndex , int expectedValue){
    if(lastIndex < 0) return false;
    if(arr[lastIndex]== expectedValue){
        return true;
    }
    return isElementPresent(arr, lastIndex-1,expectedValue);
    
}

int main(){
    int arr[6] = {1,2,10,3,4,5};
    cout << isElementPresent(arr , 5 , 1);
}