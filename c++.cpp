#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i = 0;i<n;i++){
        cin>>ar[i];
    }
    int x;
    cin>>x;
    int check = 0;
    int index = 0;
    for(int i = 0;i<n;i++){
        if(x==ar[i]){
            index = i;
            check+=1;
            break;
        }
    }
    if(check==0){
        cout<<-1<<'\n';
    }
    else{
        cout<<index<<'\n';
    }
}