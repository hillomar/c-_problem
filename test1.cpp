#include <iostream>
using namespace std;

void math(float array[],int size,float speed[]){
    int d = 0;
    speed[d] = 1;
    d+=1;
    for(int i = 0;i<size-1;i++){
        speed[d] = float((array[i]/array[i+1])*speed[d-1]);
        d+=1;
    }
}
int check(float speed[],int size){
    int ok = 0;
    for(int i = 0;i<size-1;i++){
        for(int j = i+1;j<size;j++){
            if(speed[i]==speed[j]){
                ok+=1;
            }
        }
    }
    if(ok>0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        float array[n];
        float speed[n];
        for(int i = 0;i<n;i++){
            cin>>array[i];
        }
        math(array,n,speed);
        //result
        (check(speed,n)==1) ? cout<<"YES"<<'\n' : cout<<"NO"<<'\n';
    }
}