#include <iostream>
using namespace std;

struct Node
{
    public:
    int value;
    Node* left;
    Node* right;
};

class Tree
{
    public:
    Node* root;
    Tree(){
        root = nullptr;
    }
    
    void add(Node* node, int val){
        if (root == nullptr){
            Node * temp = new Node;
            temp->left = temp->right = nullptr;
            temp->value = val;
            root = temp;
            return;
        }
        
        if (node == nullptr) {
            Node * ptr = new Node;
            node = ptr;
            ptr->left = nullptr;
            ptr->right = nullptr;
            ptr->value = val;
        }
        else{
            if (val > node->value) add(node->right, val);
            else add(node->left, val);
        }
    }
};