#include<iostream>
using namespace std;

class Hero{
    // Properties
    private:
        int health;
    public:
    Hero(){
        cout << "Constructor" << endl;
    };

    Hero(Hero& temp){
        cout << "Copy Constructor" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    // Note-> WHen you create a new constructor then defualt constructor will die that given by compiler 
    // Parameterized Constructors 
    Hero(int health){
        cout << this << endl;
        this->health = health;
    };
        char level;
        void setLevel(char level){
            this->level = level;
        }

        void setHealth(int health){
            this->health = health;
        }

        int getHealth(){
            return this->health;
        }

        char getLevel(){
            return level;
        }

        void print(){
            cout << this->health << endl;
        }
};

int main(){
    // Create a static Object 
    Hero Foram;
    Foram.setHealth(80);
    Foram.setLevel('a');
 
    cout << "Foram's Level is " << Foram.getLevel() << endl;
    cout << "Foram's health is " << Foram.getHealth() << endl;

    // Dyanimically Intialize
    Hero* Harshiv = new Hero;
    Harshiv->setHealth(101);
    Harshiv->setLevel('n');

    cout << "Harhsiv's Level is "<< Harshiv->getLevel() << endl;
    cout <<"Harshiv's Health is  "<< Harshiv->getHealth() << endl;

    Hero Temp(19);
    cout << &Temp << endl;
    Temp.print();

    //Copy the Object class will give you by default copy constructor 
    Hero Demo(Temp);
    cout << &Demo << endl;
    Demo.print();
}