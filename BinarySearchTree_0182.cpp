#include <iostream>
using namespace std; // library

//membuat classs node
class Node {

    //memberi akses modifier serta mendeklarasi variable dan object node
    public :
    string info;
    Node* leftChild;
    Node* rightChild; 

    //membuat constructor untuk class node
    Node(string i, Node* l, Node* r){
        // memberi nilai parameter ke variable
        info = i;
        leftChild = l;
        rightChild = r;
    }

};

// membuat class BinaryTree
class BinaryTree {

    // memberi akses modifier dan deklarasi object
    public :
    Node* ROOT;

    // membuat constructor dan memberi nilai kepada object
    BinaryTree(){
        ROOT = nullptr;
    }

    // membuat prosedur insert
    void insert(string element){

    }
};