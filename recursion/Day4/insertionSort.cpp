#include<iostream>
using namespace std; 

void InsertionRecursion(int arr[], int size){
    // Base Case
    if(size <=1 )return;

    // Sort first n-1 elements
    InsertionRecursion(arr, size-1);


    // Insert last element to it's correct position
    int last = arr[size-1];
    int j = size-2;

    while (j>0 && arr[j] > last)
    {
        arr[j+1] = arr[j];
        j--;
    }

    arr[j+1] = last;    
}

void loopInsertion(int arr[], int size){

    // We are starting from second element here we believe that first element is sorted 
    // after that next 2 and after that we will sort next 3 element 
    for(int i=1; i <size; i++){
        int key = arr[i];
        int j = i-1; 

        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key; 
    }
}

int main(){
    int arr[] = {3,31,1,-2,6,5};

    loopInsertion(arr, 6);

    for(int i=0; i < 6; i++){
        cout << arr[i] << " ";
    }
}