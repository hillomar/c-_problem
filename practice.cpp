//list
#include <iostream>
#include <list>
#include <chrono>
using namespace std;
using namespace chrono;

void sort(int number,list<int>& sorted){
for(list<int>::iterator it = sorted.begin();it!=sorted.end();it++){
    if(*it>number){
        sorted.insert(it,number);
        return;
    }
}
sorted.push_back(number);
}

void display(list<int>& sorted){
    int d = 1;
for(list<int>::iterator it = sorted.begin();it!=sorted.end();it++){
    cout<<"Player No "<<d<<": "<<*it<<'\n';
    d+=1;
}
}

int main(){
    //define
    list<int> sorted;
    list<int> noob;
    list<int> pro;
    int n,number;
    //input
    cin>>n;
    auto start = high_resolution_clock::now();
    for(int i = 0;i<n;i++){
        cin>>number;
        sort(number,sorted);
        if(number>=1&&number<=5){
            sort(number,noob);
        }
        else if(number<=9&&number>=6){
            sort(number,pro);
        }
    }
    //output
    cout<<'\n'<<"All players rating:"<<'\n';
    display(sorted);
    cout<<'\n'<<"Noob Players:"<<'\n';
    display(noob);
    cout<<'\n'<<"Pro Players:"<<'\n';
    display(pro);
     
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop-start);
    cout<<'\n'<<"Time taken: "<<duration.count()<<" milliseconds"<<'\n';
}