#include <iostream>
#include <cstring> // For strcpy

using namespace std;

class MyClass {
public:
    char *number; 
    static int time;

    MyClass() {
        cout << "Constructor Called!" << endl;
        number = new char[100];
    }

    MyClass(const MyClass &obj) {
        strcpy(this->number, obj.number);
    }

    void setNumber(const char* num) {
        strcpy(this->number, num);
    }

     void getNumber() {
        cout << number<<endl;
    }

    ~MyClass() {
        cout << "MyClass destructor called!" << endl;
    }
};

int MyClass::time = 10;

int main() {
    cout << MyClass::time << endl;
    // MyClass Joy;
    // Joy.setNumber("Harshiv");

    // MyClass Harshiv(Joy);
    // Harshiv.number[0] = 'G';
    // Joy.getNumber();
    // Harshiv.getNumber();

    // IN static 
    MyClass a;
    a.time = 5;

    cout << MyClass::time << endl;
    // Dyanamic
    MyClass *b = new MyClass();
    delete b;

    return 0;
}
