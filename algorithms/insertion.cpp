#include<iostream>
#include<vector>
using namespace std;

// H.w

void insertionWhile( vector<int> &arr){
    int n = arr.size();
    int i = 1;
    while(i < n ){
        int j = i-1;
        int temp = arr[i];
        while( j >=0 ){
            if(arr[j]> temp){
                arr[j+1] = arr[j];
            }else{
                break;
            }
            j--;
        }
        arr[j+1] = temp;
        i++;
    }

    for( int i = 0; i < n ; i++ ){
        cout << arr[i] << " " ;
    }
}

void insertIion(vector<int>&arr, int n ){

    for(int i=1; i < n; i++){
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }else{
                // If temp value is greater means all other elements will be shorted which are
                // sorter than the current value
                break;
            }
        }
             arr[j+1] = temp;
        
    }
}

int main(){
    vector<int> arr{10,1,7,4,8,2,11};
    int n = arr.size();
    insertIion(arr,  n );
    insertionWhile(arr);
}