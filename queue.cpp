#include <iostream>
#include <queue>
using namespace std;

void display(queue<string>);

int main(){
    queue<string> myQueue;
    myQueue.push("I wake up.");
    myQueue.push("I eat breakfast.");
    myQueue.push("I go to college.");
    myQueue.push("I come home.");
    myQueue.push("I take lunch.");
    myQueue.push("I go to gym.");
    myQueue.push("I eat snacks.");
    myQueue.push("I study a bit.");
    myQueue.push("I eat dinner");
    myQueue.push("I watch reels.");
    myQueue.push("I go to sleep.");

    cout<<"The size of the queue is: "<<myQueue.size()<<'\n';
    cout<<"The first element is: "<<myQueue.front()<<'\n';
    cout<<"The last element is: "<<myQueue.back()<<'\n';
    cout<<"And my queue is:"<<'\n';

    display(myQueue);
}

void display(queue<string> queue){
    while(!queue.empty()){
        cout<<queue.front()<<"\n";
        queue.pop();
    }
    cout<<"...And that's about it!"<<'\n';
}