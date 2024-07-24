#include<iostream>
#include<vector>
using namespace std;

int BinarySerach(vector<int> &arr , int s, int e,int k){
    int end = e;
    int start =s ;
    int mid = start + (end- start)/2;

    while(start <= end){
        if(arr[mid] == k){
            return mid;
        }

        if(arr[mid] > k){
            end = mid-1;
        }else{
            start = mid +1;
        }

        mid = start + (end- start)/ 2;
    }
    return -1;
}

int getPivotIndex(vector<int> &arr, int n){
    int s =0;
    int e = n-1;

    int mid = s+(e-s)/2;

    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid+1;
        }else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }

    return s;
}

int main(){
    vector<int> arr{12,13, 15, 18, 2, 4,5};

    int size = arr.size();
    int target = 100;

    int pivot = getPivotIndex(arr , size);

    if(target >=arr[pivot] && target <= arr[size-1]){
        cout << "Target Value "<< target<<" at "<<BinarySerach(arr ,pivot , size-1, target)<< endl;
    }else{

        cout << "Target Value "<< target<<" at "<<BinarySerach(arr ,0 , pivot-1, target)<< endl;
    }
}