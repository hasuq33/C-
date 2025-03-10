#include<iostream>
#include<vector>
using namespace std;

void sortArry(int *arr , int n){
    if(n==0 || n==1) return;

    for(int i=0; i <n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    sortArry(arr,n-1);
}

void bubbleSort(int arr[] , int size){

    bool swapped;
    for(int i=0; i < size-1 ; i++){
        swapped = false;
        for(int j=0;  j < size -i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }

    for(int i=0; i < size; i++){
        cout << arr[i] <<" ";
    }
}

int main(){
    int arr[] = {5,6,1,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    sortArry(arr, size);

    for(int i=0; i < size; i++){
        cout << arr[i] <<" ";
    }
}