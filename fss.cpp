#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    int count = 0;
    for(int i = 0;i<n;i++){
        int x,diff;
        cin>>x;
        if(i!=0&&x<array[i-1]){
            diff = array[i-1]-x;
            count+=diff;
            array[i] = x+diff;
        }
        else{
            array[i] = x;
        }
    }
    cout<<count<<'\n';
}