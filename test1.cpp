#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int a = 1;
    int count = 0;
    while(1){
        while(1){
        if(a<x){
            a*=2;
        }
        else if(a==x){
            a==0;
            break;
        }
        else{
            a/=2;
            break;
        }
    }
    if(a!=0){
        
        x -= a;
        a==1;
    }
    else{
        count+=1;
        goto here;
    }
    }
    here:
    cout<<count<<'\n';
}