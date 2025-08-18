#include <iostream>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

node* create_node(int data){
    node* new_node = new node();
    new_node->data = data;
    new_node->left = new_node->right = nullptr;
    return new_node;
}

int main(){
    //level 1
    node* root = create_node(1);
    //level 2
    root->left = create_node(2);
    root->right = create_node(3);
    //level 3
    root->left->left = create_node(4);
    root->left->right = create_node(5);
    root->right->left = create_node(6);
    root->right->right = create_node(7);
    //level 4
    root->left->right->left = create_node(9);
    root->right->right->left = create_node(15);
}