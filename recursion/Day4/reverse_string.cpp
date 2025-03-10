#include<iostream>
using namespace std; 

string reverse(int i , int j , string n){
    while ( i < j )
    {
        swap(n[i],n[j]);
        i++; 
        j--; 
    }

    return n; 
}

string rverseRecusrsion(int i , int j , string n){
    if( i > j){
        return n; 
    }
    swap(n[i], n[j]);
    i++;
    j--;
    return rverseRecusrsion(i, j, n);

}

int main(){
    string n = "Harshiv";
    int i =0; 
    int j = n.size()-1;

    cout << reverse(i, j , n) << endl;
    cout << rverseRecusrsion(i,j,n)<< endl;
}