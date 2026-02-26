#include <iostream>
using namespace std;

class car{
    public:
    string brand;
    string model;
    int year;

    car(string a,string b,int c){
        this->brand = a;
        this->model = b;
        this->year = c;
    }
    
    void DisplayDitails(){
        cout<<"The Brand of the Car is "<<brand<<'\n';
        cout<<"The Model of the Car is "<<model<<'\n';
        cout<<"The Car was Manufactured in "<<year<<'\n';
    }
};

int main(){
    car car1 = {"BMW","M4",2014};
    car1.DisplayDitails();
    return 0;
}