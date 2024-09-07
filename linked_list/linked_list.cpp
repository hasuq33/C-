#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
    
    // Contsructor 
    Node(int data){
        this-> data = data;
        this->next = NULL;
    }
};

int main(){

    Node* node1 = new Node(3);
    Node* node2 = new Node(4);

    node1->next = node2;
}