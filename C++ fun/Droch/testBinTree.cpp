#include "binTree.h"

int main(){
    Tree t;
    t.add(t.root, 1);
    t.add(t.root, 2);
    std::cout << t.root->right << t.root->left;

}