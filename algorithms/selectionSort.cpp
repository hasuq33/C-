#include<iostream>
#include<vector>
#include<climits>
using namespace std;
// Space Complexity O(1)
// Time Complexity O(n2)
// Best Case and worst case complexity o(n2)
// use case: if array size small then use selectionSort 
vector<int> selectionSort(vector<int> &arr, int n ){

    for(int i=0; i<n-1 ; i++){
        int min_index = i;
        for(int j=i+1 ; j<n ; j++){
            if(arr[min_index] > arr[j]){
                min_index = j;
            }
        }
            swap(arr[i],arr[min_index]);
        
    }

    for(int i=0; i < n ; i++){
        cout << arr[i] << endl;
    }

    return arr;
}

int main(){
    vector<int> arr{64, 25, 12, 22, 11};
    int size = arr.size();

    selectionSort(arr , size);
}