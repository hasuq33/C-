#include<iostream>
using namespace std;

int binarySearch(int arr[] , int size ,int key){
    int low = 0;
    int high = size - 1;
    int mid =low + (high-low)/2; 

    while (low <= high)
    {
        if(key == arr[mid]) return mid;

        if(key > arr[mid])  low = mid+1;

        else if(key < arr[mid]) high = mid-1;

        mid =low + (high-low)/2;
    }

    return -1; 
    
}

int main(){
    int even[7] ={2,4,6,8,10,12,17};

    cout << "Index of 12 is "<< binarySearch(even, 7 , 12);

}