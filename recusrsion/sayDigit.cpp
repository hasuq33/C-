#include<iostream>
using namespace std;

void sayDigitRecusion(int n , string arr[]){

    // Base Case
    if( n == 0) return;

    int digit = n % 10; 
    n = n /10;
    sayDigitRecusion(n, arr);
    // Here We are calling after Recusion
    cout << arr[digit]  << " ";
}

void sayDigit(int n, string arr[]){

    int rev_num = 0; 
    while(n!=0){
        int digit = n%10;
        rev_num = rev_num*10 + digit;
        n = n/10;
    }

    while(rev_num !=0){
        int digit = rev_num%10;
        cout << arr[digit] << " ";
        rev_num = rev_num/10;
    }
}

int main(){
    int n = 1234; 
    string arr[10] = {"zero", "one", "two", "three", "four", "five","six", "seven", "eight", "nine"};
    sayDigit(n, arr);
    cout << endl;
    sayDigitRecusion(n , arr);
}