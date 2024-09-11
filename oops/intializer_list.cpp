#include<iostream>
using namespace std;

class MyClass{
    int x;
    const int y;
    int& z;

    public:
    //Constructor with initializer set
    MyClass(int a, int b, int &c):x(a), y(b), z(c){
        // Constructor Body
        cout << "Constructor is called" << endl;
    }

    void display(){
        cout<<"x: "<<x<<" Y: "<<y<<" Z: "<<z<<endl;
    }
}; 

int main(){
    int var = 50;
    MyClass obj(10,30,var);

    obj.display();
    var = 100;

    obj.display();
}