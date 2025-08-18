#include <iostream>
using namespace std;

//template syntax
template <typename type>
type add(type a,type b){
    return a+b;
}
template <typename type>
type minus(type a,type b){
    return a-b;
}

//template class syntax
template <typename type>
class calculator{
    public:
    type add(type a,type b){
        return a+b;
    }
    type subtract(type a, type b){
        return a-b;
    }
    type multiply(type a, type b){
        return a*b;
    }
    type divide(type a, type b){
        if(b==0){
            cout<<"ERROR"<<'\n';
        }
        else{
            return a/b;
        }
    }
};
int main(){
    calculator <float> point;
    cout<<point.add(2.33,6)<<'\n';
     cout<<point.subtract(2,6.88)<<'\n';
      cout<<point.multiply(2,6)<<'\n';
       cout<<point.divide(2.33,.9)<<'\n';
}