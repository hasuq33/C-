#include<iostream>
using namespace std; 

// Time Complexity : o(nlogn)
void merge(int arr[], int s , int e){
    int mid = s+(e-s)/2;

    int len1 = mid-s+1;
    int len2 = e-mid; 

    int *first = new int[len1];
    int *second = new int[len2];

    // Copy values 
    int mainIndexValues = s;
    for(int i=0; i<len1; i++){
        first[i] = arr[mainIndexValues++];
    }

    for(int i=0; i<len2; i++){
        second[i] = arr[mainIndexValues++];
    }

    // Let me merge two sorted arrays
    int index1 = 0; 
    int index2 = 0;
    mainIndexValues = s; 

    while (index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainIndexValues++] = first[index1++];
        }else{
            arr[mainIndexValues++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainIndexValues++] = first[index1++];
    }

    while (index2 < len2){
        arr[mainIndexValues++] = second[index2++];
    }
    
    delete []first; 
    delete []second;
}

void mergeSort(int *arr, int s , int e){

    // Base case
    if(s>=e){
        return;
    }

    int mid = s+(e-s)/2;

    // Left part sort karna hai 
    mergeSort(arr, s, mid);

    // right part sort karna hai
    mergeSort(arr, mid+1, e); 


    // Merge
    merge(arr, s, e);
}

int main(){
    int arr[] = {1,3,-1,2,-5,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr, 0,n-1);

    for(int i=0; i<n; i++){
        cout << arr[i] << " "; 
    }
    return 0;
}