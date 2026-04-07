#include <iostream>
using namespace std;


class Student{
    private:
        string name;
        int rollNumber;
        int marks;
    public:
        void setDetails(string a,int b, int c){
            cout<<"Enter name: ";
            cin>>a;
            name = a;
            cout<<"\nEnter Roll Number: ";
            cin>>b;
            rollNumber = b;
            cout<<"\nEnter Marks: ";
            cin>>c;
            marks = c;
            cout<<'\n';
        }
        void displayDetails(){
            cout<<"Name: "<<name<<'\n';
            cout<<"Roll Number: "<<rollNumber<<'\n';
            cout<<"Marks: "<<marks<<'\n';
        }
};

int main(){
    Student S1;
    int r,m;
    string na;
    
    S1.setDetails(na,r,m);
    S1.displayDetails();
}