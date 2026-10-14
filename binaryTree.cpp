#include <iostream>
using namespace std;

struct Node{
    int value;
    Node* lchild;
    Node* rchild;
    Node(int v){
        value = v;
        lchild = nullptr;
        rchild = nullptr;
    }
};

int main(){

    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n4 = new Node(4);
    Node* n5 = new Node(5);
    n1->lchild = n2;
    n1->rchild = n3;
    n3->rchild = n4;
    n2->lchild = n5;

    return 0;
}