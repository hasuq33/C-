#include<iostream>
#include<vector>
using namespace std;

int chalkReplacer(vector<int>& chalk, int k){
    long long total_chalk = 0;
    for(int pieces: chalk){
        total_chalk += pieces;
    }

    k%= total_chalk;
    for(int i=0; i < chalk.size(); i++){
        if(k < chalk[i]){
            
            return i;
        }
        k -= chalk[i];
    }

    return -1;
}

int main(){
    vector<int> chalk{3,4,1,2};
   cout << chalkReplacer(chalk ,25);
}