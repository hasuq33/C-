#include<iostream>
using namespace std;

int binaryRecusrsion(int *arr, int start , int end , int key){
    if(start>end) return -1;
    int mid = start + (end-start)/2;

    if(arr[mid] ==key) return mid;

    if(arr[mid] > key){
        return binaryRecusrsion(arr , start , mid-1, key);
    }else{
        return binaryRecusrsion(arr , mid+1 , end, key);
    }
}

int binarySearch(int arr[], int size , int value){
    int start =0; 
    int end = size-1; 
    int mid = start + (end-start)/2;

    while (start<end){
        if(arr[mid] == value){
            return mid;
        }

        if(arr[mid] > value){
            end = mid-1;
        }else{
            start = mid+1;
        }

        mid = start + (end-start)/2;
    }
    return -1;
}

int main(){
    int arr[] = {0,2,30,40,55,65,73,76,87};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << binarySearch(arr,size,55) << endl;
    cout << binaryRecusrsion(arr,0, 8,55) << endl;
}