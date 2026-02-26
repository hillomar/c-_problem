#include <iostream>
#include <list>
using namespace std;

int gcd(int a,int b){
    int g;
    int min = (a<=b)?a:b;
    for(int i = min;i>=1;i--){
        if(a%min==0&&b%min==0){
            g = i;
            break;
        }
    }
    return g;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        list <int> mylist;
        for(int i = 1;i<=n;i++){
            int v = gcd(i,n);
            
        }
    }

}