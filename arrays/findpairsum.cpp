#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){
    vector<vector<int>> ans;

    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j < arr.size(); j++){
            if(arr[j] + arr[i] == s){
                vector<int> temp;

                temp.push_back(min(arr[j], arr[i]));
                temp.push_back(max(arr[j], arr[i])); 
                ans.push_back(temp);  
            }
        }
    }

    sort(ans.begin(), ans.end());

    for(int i=0; i<=ans[i].size(); i++){
        cout << ans[i][0] << " ";
        cout << ans[i][1] << " ";
        cout << endl;
    }

    return ans;
}

int main(){
    vector<int> num{2 ,-3 ,3 ,3 ,-2};

    pairSum(num,0);


}