#include<iostream>
using namespace std;

int findDuplicate(int arr[], int size){

    for(int i=0; i<9; i++){
        for(int j =0; j < 9; j++ ){
            if( i == j) continue;
            if(arr[i] == arr[j]){
                return arr[i];
            }  
        }
    }
}

int main(){

    int arr [9] = {8 ,7 ,2 ,5 ,4 ,7 ,1 ,3 ,6};

    int ans = 0;

    for(int i =0; i < 9; i++){
        ans = arr[i] ^ ans;
    }
    
    // Now xor operation wit 1 to size -1 
    for(int i =1; i < 9; i++){
        ans = ans ^ i;
    }

    cout << ans<<endl;

    // cout << findDuplicate(arr, 9) << endl;

}