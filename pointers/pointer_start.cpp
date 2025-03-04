#include<iostream>
using namespace std;

int main(){
    int n=5;


    // Copy the Pointer
    int *ptr = &n;
    int *qtr = ptr; 
    
    // Here I am actually increment the Storage Loacrion Address i.e. if memory address 4 when you increment the 
    // Pointer address by +1 then it is will by point 8 address and increase the 4 bytes . 
    (ptr)++;// *ptr = *ptr+1;

    cout << *ptr <<endl;

    return 0;
}