#include <iostream>
using namespace std;
int check(int array[],int size,int number){
    int d = 0;
    for(int i=0;i<size;i++){
        if(array[i]==number){
            d+=1;
            break;
        }
    }
    return d;
}
int main(){
    int n;
    cin>>n;
    int array[n];
    int result = 0;
    for(int i = 0;i<n;i++){
        cin>>array[i];
        int dool = check(array,i,array[i]);
        if(dool==0){
            result+=1;
        }
    }
    cout<<result<<'\n';
}