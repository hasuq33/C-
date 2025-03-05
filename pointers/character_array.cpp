#include <iostream>
using namespace std; 

int main(){
    int arr[5]  = {0,1,2,3,4};
    char ch[6] = "abcde"; 

    cout << arr << endl; // This will print the address of array 
    cout << ch << endl; // This will print the etire character array 

    char *c = &ch[0];
    cout << *c << endl; // Print Fist Character
    cout << c << endl; // Print the Entire String

    char temp = 'b';
    char *p = &temp;

    cout << p << endl;
    return 0; 
}