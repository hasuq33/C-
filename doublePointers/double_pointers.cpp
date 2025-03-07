#include<iostream>
using namespace std;


void update(int **p){
    // p = p +1;
    // *p = *p +1 ;
    **p =  **p +1;
}

int main(){

    // int i = 5; 
    // int *p = &i;
    // int **p2 = &p; // This is out double Pointer

    // cout << "Before update i is "<< i << endl;
    // cout << "Before update p is "<< p << endl;
    // cout << "Before update p2 is "<< p2 << endl;

    // update(p2);

    // cout << "After update i is "<< i << endl;
    // cout << "After update p is "<< p << endl;
    // cout << "After update p2 is "<< p2 << endl;

    // int first = 8; 
    // int second = 18; 
    // int *ptr = &second;
    // *ptr = 9;
    // cout << first << " " << second << endl;

    // int *p = 0;
    // int first = 110;
    // *p = first; //Throw an segmantation Error
    // cout << *p << endl;
    // cout<< "Hello "<< endl;
 
    // int arr[5];
    // int *ptr; 
    // cout << sizeof(arr)<< " "<< sizeof(ptr) << endl;

    // int arr[5] = { 11 , 12 , 13, 14, 15};
    // int *ptr = arr;
    // ptr++;
    // cout << *ptr << endl ;
    
    // char ch = 'a';
    // char *ptr = &ch;
    // ch++; 
    // cout << *ptr <<endl;
    // return 0;

    // int first = 110; 
    // int *p = &first; 
    // int **q = &p;
    // int second = (**q)++ + 9;
    // cout  << first << " " <<second << endl;

    int first = 100;
    int *p = &first; 
    int **q = &p;
    int second = ++(**q);
    int *r = *q;
    ++(*r);
    cout << first << " " << second << endl;

}