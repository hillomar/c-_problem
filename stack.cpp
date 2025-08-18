#include <iostream>
#include <stack>
using namespace std;

void displayMyStack(stack<int>);

int main(){
    //empty, size, push, pop, top.
    stack<int> myFirstStack;
    for(int i = 1;i<=5;i++){
        myFirstStack.push(i);
    }

    displayMyStack(myFirstStack);

    if(myFirstStack.empty())
    cout<<"The stack is empty."<<'\n';
    else
    cout<<"The stack is not empty."<<'\n';

    cout<<"The size is "<<myFirstStack.size()<<'\n';
}

void displayMyStack(stack<int> stack){
    while(!stack.empty()){
        cout<<stack.top()<<'\n';
        stack.pop();
    }
    
}