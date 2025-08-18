#include <iostream>
#include <list>
using namespace std;

/*int main(){
    list <int> mylist;
    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_front(30);
    mylist.erase(mylist.begin());

    for(list<int>::iterator it = mylist.begin(); it != mylist.end();it++){
        cout<< *it <<'\n';
    }
}*/

//in game rating wise list
void display(const list<int>& player){
    for(list<int>::const_iterator it = player.begin();it != player.end();it++){
        cout<<"Player rating: "<<*it<<'\n';
    }
}
void sort(int rating, list<int>& playerbyrating){
    for(list<int>::iterator it = playerbyrating.begin();it!=playerbyrating.end();it++){
        if(*it > rating){
            playerbyrating.insert(it, rating);
            return;
        }
    }
    playerbyrating.push_back(rating);
}
int main(){
    list<int> allplayers = {1,2,3,4,5,6,7,8,9,7,3,2,5,6};
    list<int> noob;
    list<int> pro;
    for(list<int>::iterator it = allplayers.begin();it!=allplayers.end();it++){
        if(*it>=1&&*it<=5){
            sort(*it,noob);
        }
        else if(*it<=9&&*it>=6){
            sort(*it,pro);
        }
    }
    cout<<"Noob Catagory: "<<'\n';
    display(noob);
    cout<<"Pro Catagory: "<<'\n';
    display(pro);
    
}

