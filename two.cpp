/*#include <iostream>
#include <list>
using namespace std;
void sort(int rating, list<int>& sortedlist){
    for(list<int>::iterator it = sortedlist.begin();it!=sortedlist.end();it++){
        if(*it > rating){
            sortedlist.insert(it,rating);
            return;
        }
    }
    sortedlist.push_back(rating);
}
void display(const int rating, list<int>& finallist){
    for(list<int>::const_iterator it = finallist.begin();it!=finallist.end();it++){
        cout<<"Player Rtaing: "<<*it<<'\n';
    }
}
int main(){
    //define
    list<int> noob;
    list<int> pro;
    //input
    int n;
    cin>>n;
    int rating;
    //sort
    for(int i = 0;i<n;i++){
        cin>>rating;
        if(rating>=1&&rating<=5){
            sort(rating,noob);
        }
        else if(rating>=6&&rating<=9){
            sort(rating,pro);
        }
    }
    //print
    cout<<"Noob Players Rating: "<<'\n';
    display(rating,noob);
    cout<<"pro Players Rating: "<<'\n';
    display(rating,pro);
}*/

#include <iostream>
#include <list>
#include <string>
using namespace std;

    template <typename all>
    all display(all input, list<all>& bazar){
    for(list<all>::iterator it = bazar.begin();it!=bazar.end();it++){
        cout<<*it<<'\n';
    }
}
template <typename all>

    all sort(all input){
    list<int> price;
    list<string> name;
    if(input==int){
        price.push_back(input);
    }
    else if(input==string){
        name.push_back(input);
    }
}
template <typename all>
int main(){

    list<int> price;
    list<string> name;
    int n;
    cin>>n;
    all input;
    for(int i = 0;i<n;i++){
        cin>>input;
        sort(input);
    }
    cout<<"Name of the groceries are: "<<'\n';
    display(input,name);
    cout<<"Price of the groceries are: "<<'\n';
    display(input,price);
}


