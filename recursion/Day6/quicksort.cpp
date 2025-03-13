#include<iostream>
using namespace std;

int partition(int arr[], int s , int e){
    int pivot = arr[s]; 
    int count=0;
    // Count all small number that starting element
    for(int i=s+1; i<=e; i++){
        if(arr[i] < pivot){
            count++;
        }
    }

    int pivotIndex = s + count;
    swap(arr[pivotIndex],arr[s]);

    // Now swap all greater element in right side of pivotIndex and small element in left side
    int i =s,j=e; 
    while ( i < pivotIndex && j > pivotIndex){
        while(arr[i] < pivot){
            i++;
        }
        while (arr[j] > pivot){
            j--;
        }
        
        // This condition means any element is smaller than pivotIndex and greater than pivotIndex 
        // Now swap them
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s , int e){
    // Base Case
    if(s>=e) return;

    // Get Partition Index
    int p = partition(arr, s, e);

    // Sort Left Side Element 
    quickSort(arr, s , p-1);

    // Sort Right Side Element
    quickSort(arr, p+1, e);
}

int main(){
    int arr[] = { -2,-19,3,53,82,82,1389,-1373,55};
    int size = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, size-1);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}