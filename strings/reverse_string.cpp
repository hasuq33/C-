#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string reverse_string(string str){
    string result;
    for(int i=str.length()-1; i>=0; i--){
        result.push_back(str[i]);
    }
    return result;
}

int main(){
    string harshiv = "Harshiv";
   cout << reverse_string(harshiv)<< endl;
     reverse(harshiv.begin(), harshiv.end());
     cout << harshiv << endl;

}