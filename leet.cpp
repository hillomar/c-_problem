#include <iostream>
#include <vector>
using namespace std;
int main(){
    char a;
    int n;
    vector<int> vec;
    int d = 0;
    while(1){
        if(d%2==0){
            cin>>a;
            if(a==']'){
                break;
            }
            d+=1;
        }
        else{
            cin>>n;
            vec.push_back(n);
            d+=1;
        }
    }
    int target;
    cin>>target;
    //check
    int size = vec.size();
    for(int i = 0;i<size-1;i++){
        for(int j = i+1;j<size;j++){
            if(vec[i]+vec[j]==target){
                cout<<'['<<i<<','<<j<<']'<<'\n';
                break;
            }
        }
    }
    return 0;
}