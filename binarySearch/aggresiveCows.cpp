#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> &arr, int k , int mid){
    int cowCount = 1 ;
    int lastPos = arr[0];

    for(int i=0; i < k; i++){
        if((arr[i] - lastPos) >= mid){
            cowCount++;
            if(cowCount == k) return true;

            lastPos = arr[i];
        }
    }

    return false;
}

int aggresiveCows(vector<int> &stalls, int k){
    sort(stalls.begin(), stalls.end());

    int start = 0;
    int maxi = -1;
    int ans = -1;

    for(int i=0; i < stalls.size(); i++){
        maxi = max(maxi, stalls[i]);
    }

    int end = maxi;
    int mid = start + (end- start)/2;

    while(start < end){
        if(isPossible(stalls , k , mid)){
            ans = mid;
            start = mid +1 ;
        }else{
            end = mid -1 ;
        }
        mid = start + (end - start)/2;
    }

    return ans;
}

int main(){
    vector<int> stalls{0 ,3, 4, 7 ,10 ,9};

    cout << aggresiveCows(stalls,2);
}