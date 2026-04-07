#include <iostream>
using namespace std;

class Box {
    public:
        double length;
        double breadth;
        double height;
};

int main(){
    Box box1,box2;
    double volume = 0.0;

    box1.breadth = 5.0;
    box1.height = 6.0;
    box1.length = 7.0;

    box2.breadth = 4.0;
    box2.height = 5.0;
    box2.length = 6.0;
    
    volume = box1.breadth * box1.height * box1.length;

    cout<<"Volume of box1 is "<<volume<<'\n';

    volume = box2.breadth * box2.height * box2.length;

    cout<<"Volume of box2 is "<<volume<<'\n';
}