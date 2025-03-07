#include<iostream>
using namespace std;

void update(int **p){
    ++(**p);
}

int main(){
    int num = 110;
    int *ptr = &num;
    update(&ptr);
    cout << num << endl;
}