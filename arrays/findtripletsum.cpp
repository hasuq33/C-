#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s)    {
    vector<vector<int>> ans;

    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j < arr.size(); j++){
            for(int k=j+1 ; k < arr.size(); k++){
                if(arr[i] + arr[j] + arr[k] == s){
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    sort(temp.begin() , temp.end());
                    ans.push_back(temp);
                }
            }
        }
    }

    sort(ans.begin(), ans.end());

    for(int i=0; i<=ans[i].size(); i++){
        cout << ans[i][0] << " ";
        cout << ans[i][1] << " ";
        cout << ans[i][2] << " ";
        cout << endl;
    }

    return ans;
}

int main(){
    vector<int> num{1, 2 ,3,4,5};

    pairSum(num,10);


}