#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
    vector<vector<int>> result;
    int size = original.size();

    if(m*n != size){
        return result;
    }
    int i = 0;
    while (i < size){
        vector<int> ans;
        for(int j=1; j <=n; j++){
            ans.push_back(original[i]);
            i++;
        }
        result.push_back(ans);
    }
    return result;
}

int main(){
    vector<int> arr{1,2,3,4};
    construct2DArray(arr,2 ,2);
}