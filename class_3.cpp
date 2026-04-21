#include <iostream>
using namespace std;

class Person{
    string *name;
    public:
    Person(){
        name = new string;
    }
    // Person(Person &c){
    //     name = c.name;
    // }
    void nameset(string a){
        name = new string;
    }
    void display(int g){
        cout<<"Person "<<g<<": "<<name<<'\n';
    }
};

int main(){
    Person P1 = {"AAA"};
    Person P2 = P1;
    P1.display(1);
    P2.display(2);
    P2.nameset("BBB");
    cout<<"After Modifying Person 2:\n";
    P1.display(1);
    P2.display(2);


}