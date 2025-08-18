#include <iostream>
using namespace std;

struct node {
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
    
}