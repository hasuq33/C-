#include<iostream>
#include<vector>
using namespace std;

// Note : Explore this Probleb Later with Tranjan Algorithms
int minDays(vector<vector<int>>& grid){
    int days =  0;

    for(int i =0; i < grid.size(); i++){
        for(int j=0 ; j < grid[i].size(); j++){
            if(grid[i][j] == 1 && grid[i][j+1] == 1){
                days++;
            }
        }
    }

    return days;
}

int main(){
    vector<vector<int>> grid{{0,1,1,0},{0,1,1,0},{0,0,0,0}};
    // vector<vector<int>> grid{{1,1}};

    cout << minDays(grid) << endl;
}