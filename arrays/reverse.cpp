#include<iostream>
using namespace std;

int main(){
    int arr[11] = {1,2,3,4,5,6,7,8,9,10,11};
    int size = sizeof(arr)/sizeof(arr[0]);
    int last =  size -1;

    for(int i =0; i < size/2 ;  i++){
        swap(arr[i], arr[last]);
        last--;
    }

    for(int i=0; i< size; i++){
        cout << arr[i] << " ";
    }
}