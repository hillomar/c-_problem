#include <iostream>
using namespace std;

int odd_divisor(int n){
    int divisor = 0;
    for(int i = 3;i<=n;i+=2){
        if(n%i==0){
            divisor = i;
            break;
        }
    }
    return divisor;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int d = 0;
        while(1){
            int div = odd_divisor(n);
            if(div%2!=0&&n%div==0){
                n/=div;
                d+=1;
            }
            else if(n>1){
                n-=1;
                d+=1;
            }
            else{
                break;
            }
        }
        if(d%2!=0){
            cout<<"Ashishgup"<<'\n';
        }
        else{
            cout<<"FastestFinger"<<'\n';
        }
    }
}