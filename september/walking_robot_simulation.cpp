#include<iostream>
#include<string>
#include<utility>
#include<unordered_set>
#include<vector>
#include<cmath>
using namespace std;

int robotSim(vector<int>& commands, vector<vector<int>>& obstacles){
    vector<pair<int,int>> directions = {{0,1},{1,0},{0,-1},{-1,0}};
    int x= 0,y= 0,direction=0;
    int maxDistanceSquared =0 ;

    // Use a set to store the obstacles for quick lookup
    unordered_set<string> obstaclesSet;

    for(auto&obs: obstacles){
        obstaclesSet.insert(to_string(obs[0])+","+to_string(obs[1]));
    }
    // Process each command
    for(int command: commands){
        if(command == -2){
            // Turns left counter Clcokwise
            direction = (direction+3)%4;
        }else if(command == -1){
            direction = (direction+1)%4;
        }else{
            // Move Forward
            for(int step=0; step < command; ++step){
                int newX = x+directions[direction].first;
                int newY = y + directions[direction].second;

                // Check the new position is an obstacle 
                if(obstaclesSet.find(to_string(newX)+ "," + to_string(newY)) != obstaclesSet.end()){
                    break;
                }

                x = newX;
                y = newY;

                maxDistanceSquared = max(maxDistanceSquared,x*x+y*y);
            }
            
        }
    }
    return maxDistanceSquared;
}

int main(){
    vector<int> commands{4,-1,4,-2,4};
    vector<vector<int> > obstacles{{2,4}};

    cout << robotSim(commands, obstacles);
}