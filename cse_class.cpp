#include <iostream>
using namespace std;

class Employee{
    string name;
    int salary;

    public:
        Employee(string a, int b){
            name = a;
            salary = b;
        }
        Employee(Employee &c){
            cout<<"Copy Constructor Called\n";
            name = c.name;
            salary = c.salary;
        }
        void display(int c){
            cout<<"Employee "<<c<<": ";
            cout<<name<<", Salary: "<<salary<<'\n';
        }
};

int main(){
    Employee E1 = {"AAA",50000};
    Employee E2 = E1;
    E1.display(1);
    E2.display(2);
}