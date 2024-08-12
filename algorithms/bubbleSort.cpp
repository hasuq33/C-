#include<iostream>
#include<vector>
using namespace std;

// In every Round array will get it's own largest element place in write place
// Time Complexity O(n2)
// Space Complexity O(1) thete is no extras space here 
// Best Case o(n)
// Worst Case o(n2)
void bubbleSort(vector<int>& arr, int n){

    bool swapped = false;
    for(int i=1; i <n; i++ ){
        for(int j =0; j < n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }

        if( !swapped) break;
    }

    for(int i=0; i <n ; i++){
        cout << arr[i] << endl;
    }
    
}
int main(){
    vector<int> arr{10 , 1,7,6,14,9};
    int size = arr.size();
    bubbleSort(arr,size);
}