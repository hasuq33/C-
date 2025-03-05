#include<iostream>
using namespace std;

int main(){
    // int arr[4] = {0, 11,623,23};
    /*cout << "Getting the First Element of Address in array "<< arr << endl;
    cout << "Getting the First Element of Address in array "<< &arr[1] << endl;
    cout << "Fist Element Print "<< *(arr+1) << endl;

    cout << "Second Index Element in array "<< 2[arr] << endl ;
    long double *ptr = arr;
    cout << sizeof(&arr) << endl; 
    cout << sizeof(*ptr) << endl;
    
    int *ptr = &arr[1];
    cout <<"Address of 1st Element "<<&arr[1] << endl;
    cout << "---> "<< &ptr << endl; 
    */

    int arr[4] = {0,1,2,3};

    // Error 
    // arr = arr+1;
    

    int *ptr = &arr[1];
    cout << *ptr << endl;
    ptr = ptr+1;  //We Shift to the Next block 
    cout << *ptr << endl;
}