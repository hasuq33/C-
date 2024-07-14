#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int getMin(int num[], int size){
    int mini = INT_MAX;

    for(int i= 0; i < size ; i++){
        mini = min(mini, num[i]);   
    }

    return mini;
}

int getMax(int num[], int size){

    int max = INT_MIN;

    for(int i= 0; i < size; i++){
        if(num[i] > 0){
            max = num[i];
        }
    }

    return max;
}

int main(){
    int arr[10] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 };

    cout << getMax(arr, 10) << endl;
    cout << getMin(arr, 10) << endl;
}