#include <iostream>
#include <algorithm>
using namespace std;

int check(int array[],int pos,int change){
    int yes = 0;
    for(int i = 0;i<pos;i++){
        if(array[i]<=array[pos]){
            yes+=1;
            change = i;
        }
    }
    return yes;
}

int main(){
    int change = 0;
    int n;
    cin>>n;
    int height[n];
    int con[n];
    for(int i = 0;i<n;i++){
        cin>>height[i];
    }
    for(int i = 0;i<n;i++){
        cin>>con[i];
    }
    
    int temp = 0;
    for(int i = 0;i<n;i++){
        int ok = check(height,i,change);
        if(ok!=con[i]){
            temp = height[change];
            height[change] = height[i];
            height[i] = temp; 
        }
    }
    for(int i = 0;i<n;i++){
        cout<<height[i]<<'\n';
    }
}