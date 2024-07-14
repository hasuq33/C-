#include<iostream>
using namespace std;

void swapAlternates(int arr[], int size){
    for(int i =0; i < size; i+=2){
        if(i == size -1 ) break;
        swap(arr[i], arr[i+1]);
    }
}

int main(){
    int arr[11] = {1,2,3,4,5,6,7,8,9,10,11};

    swapAlternates(arr,11);

      for(int i = 0; i < 11; i++){
        cout << arr[i] << " ";
    }
  
}