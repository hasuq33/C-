#include<iostream>
#include<vector>
using namespace std;

// vector<vector<int>> subsets(vector<int>& nums) {
//     vector<vector<int>> res;
// res.push_back({});
// for(int i=0; i < nums.size(); i++){
//    int n = res.size();
//    for(int j =0; j < n; j++){
//        vector<int> subset = res[j];
//        subset.push_back(nums[i]);
//        res.push_back(subset);
//    }
// }
// return res;
// }

void solve(vector<int> nums,vector<int> output , int index , vector<vector<int>>& ans){
    // Base case
    if(index >= nums.size()){ 
        ans.push_back(output);    
        return;
    } ;

    // Exclude the Number 
    solve(nums ,output , index+1, ans);

    // include
    int element = nums[index]; 
    output.push_back(element);
    solve(nums, output,index+1, ans);
}

vector<vector<int>> subsets(vector<int>& nums){
    vector<vector<int>> ans;
    vector<int> output; 
    int index = 0;
    solve(nums,output , index, ans);
    return ans;
}

// Answe shoulde be {[],[1],[3],[3],[1,2],[1,3],[2,3],[1,2,3]}
int main(){
    vector<int>nums_r{1,2,3};

    vector<vector<int>> nums12 = subsets(nums_r);

    for(int i = 0; i < nums12.size(); i++){
        for(int j =0; j < nums12[i].size(); j++){
            cout <<  nums12[i][j] << ' ';
        }
    }
}