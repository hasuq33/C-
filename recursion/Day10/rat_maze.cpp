//{ Driver Code Starts
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  private:
    bool isSafe(int x,int y,int n,vector<vector<int>>visited ,vector<vector<int>> &mat ){
        if((x>=0 && x<n)&& (y>=0 && y<n) && visited[x][y] == 0 && mat[x][y]==1){
            return true;
        }
        
        return false;
    }
    void solve(vector<vector<int>> &mat,vector<string> &ans,int x , int y ,vector<vector<int>> &visited , string path ){
        int n = mat.size();
        // You have reached the x, y here
        
        // Base Case 
        if(x == n-1 && y == n-1){
            ans.push_back(path);
            return;
        }
        
        visited[x][y] = 1; 
        
        // 4 choices - D , L , R , U
        
        // Down 
        int newx = x+1; 
        int newy =y;
        if(isSafe(newx , newy , n , visited , mat)){
            path.push_back('D'); 
            solve(mat , ans , newx , newy , visited , path);
            path.pop_back();
        }
        
        // Left 
        newx = x; 
        newy =y-1;
        if(isSafe(newx , newy , n , visited , mat)){
            path.push_back('L'); 
            solve(mat , ans , newx , newy , visited , path);
            path.pop_back();
        }
        
        // Right 
        newx = x; 
        newy =y+1;
        if(isSafe(newx , newy , n , visited , mat)){
            path.push_back('R'); 
            solve(mat , ans , newx , newy , visited , path);
            path.pop_back();
        }
        
        // UP 
        newx = x-1; 
        newy =y;
        if(isSafe(newx , newy , n , visited , mat)){
            path.push_back('U'); 
            solve(mat , ans , newx , newy , visited , path);
            path.pop_back();
        }
        
        // Backtarck the visited 
        visited[x][y] = 0;
    }
  public:
    vector<string> findPath(vector<vector<int>> &mat) {
        // code here
        vector<string> ans;
        if(mat[0][0]==0){
            return ans;
        }
        int srcX = 0;
        int srcY = 0; 
        
        vector<vector<int>> visited = mat;
        
        // Initialized with 0
        for(int i=0; i < mat.size(); i++ ){
            for(int j=0; j < mat[0].size();j++){
                visited[i][j] = 0;
            }
        }
        
        string path = "";
        solve(mat , ans , srcX , srcY , visited , path);
        sort(ans.begin(), ans.end());
        return ans;
    }
};


