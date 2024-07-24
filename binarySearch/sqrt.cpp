#include<iostream>
using namespace std;

long long int sqrt(int n ){
     int end = n-1;
    int start = 0;

   long long  int mid = start + (end - start) /2 ;
   long long int ans = -1;
    
    while(start <= end ){
        long long int square = mid*mid;
        if(square == n ){
           return mid;
        }
        if(square > n){
            end = mid -1;
        }else{
            ans = mid;
            start = mid +1;
        }
        mid = start + (end - start) /2;
    }

    return ans;
}

double morPrecision(int n, int precision , int tempSol){

    double factor = 1;
    double ans = tempSol;

    for(int i=0; i < precision ; i++){
        factor = factor /10;
        for(double j=ans; j*j < n; j+=factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n ;
    cout << "Enter The Number: ";
    cin >> n;
    cout << endl;
    int tempSol = sqrt(n);
    cout <<" The Answer is "<< morPrecision(n , 3, tempSol);
}