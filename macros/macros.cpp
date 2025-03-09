#include <iostream>
using namespace std;

int score = 15; // This is called Global Variable

#define PI 3.14 // Here I am Replacing the PI before the compilations

int main(){
    int r = 5;
    score = 5; 
    int area = PI * r * r; 
    cout << area << endl ;
    
    cout << score << endl;
}