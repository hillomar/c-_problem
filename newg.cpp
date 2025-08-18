#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int array[n];
    int d = 0;
    int zero[d];
    for(int i = 0;i<n;i++){
        cin>>array[i];
        if(array[i]==0){
            zero[d] = i;
            d+=1;
        }
    }
    int count  = 0;
    for(int i = 0;i<d;i++){
        for(int j = 1;j<=5;j++){
            if(i-1>=0&&i+1<=n) {
                int left = fabs(array[(zero[i]-1)]-j);
                int right = fabs(j-array[(zero[i+1])]);
            }
            else if(i-1>=0&&i+1>n){
                int left = fabs(array[(zero[i]-1)]-j);
                int right = fabs(j-array[(zero[i+1])]);
            }
                
            if(left<=1&&right<=1){
                count += 1;
            }
        }
    }
    cout<<count<<'\n';
}
