#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<int> number;
    number.push_back(0);

    for(int i = 1;i<=10;i++){
        number.push_back(i);
    }

    for(auto it = number.cbegin();it!=number.cend();it++){
        cout<<*it<<'\n';
        cout<<&it<<'\n';
        cout<<&(*it)<<'\n';
        cout<<(*it / 2)<<'\n';
    }

    //important operators
    cout<<"size: "<<number.size()<<'\n';
    cout<<"max size: "<<number.max_size()<<'\n';
    cout<<"Capacity: "<<number.capacity()<<'\n';
    number.resize(5);
    cout<<"size: "<<number.size()<<'\n';
    if(number.empty()){
        cout<<"Vector is empty."<<'\n';
    }
    else{
        cout<<"Not empty."<<'\n';
    }
    cout<<"Element [0] is: "<<number[0]<<'\n';
    cout<<"Element at(0) is: "<<number.at(0)<<'\n';
    cout<<"Front: "<<number.front()<<'\n';
    cout<<"back: "<<number.back()<<'\n';
    number.clear();
    cout<<"Size: "<<number.size()<<'\n';
    if(number.empty()){
        cout<<"Vector is empty."<<'\n';
    }
    else{
        cout<<"Not empty."<<'\n';
    }


    number.insert(number.begin()+5,88);
    number.erase(number.begin()+5);
    number.pop_back();
    
}