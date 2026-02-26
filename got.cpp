#include <iostream>
using namespace std;
int main(){
    long long int n,q;
    cin>>n>>q;
    long long int array[n+1];
    for(long long int i = 1;i<=n;i++){
        cin>>array[i];
    }
    while(q--){
        long long int a,b;
        cin>>a>>b;
        long long int min = array[a];
        for(long int i = a;i<=b;i++){
            if(array[i]<min){
                min = array[i];
            }
        }
        cout<<min<<'\n';
    }
}