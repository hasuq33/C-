#include<iostream>
using namespace std;

void print(int *p){
    cout << &p << endl;
    cout << p << endl;

    *p = *p +1; // Update the Value
    p = p+1;  // It will not update the address outside of the function
}

int getSum(int arr[]){
    int sum = 0; 
    cout << sizeof(arr) << endl; // This will print the size of Pointer not array 
    for(int i=0; i < 3; i++){
        sum += arr[i];
    }

    return sum;
}

int main(){
    /*
    int value =5 ;
    int *p = &value;

    print(p);
    cout << value << endl; */

    int arr[5] = {1,2,3,4,5};

    cout << "Sum is "<< getSum(arr+2) << endl; // You can also send the specific part of array in function as a parameter
    return 0;
}