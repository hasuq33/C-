#include<iostream>
using namespace std;

bool isArraySorted(int arr[] ,int size){

    if(size == 0 || size == 1) return true;

    if(arr[0] > arr[1]){
        return false; 
    }else{
        
        bool remainingParts = isArraySorted(arr+1 , size-1);
        return remainingParts;
    }
}

int main(){
    int arr[6] = {1,2,4,3,4,5};

    bool isSorted = isArraySorted(arr, 6);

    if(isSorted){
        cout << "Arry is Sorted" << endl;
    }else{
        cout << "Arry is not Sorted" << endl;
    }
}