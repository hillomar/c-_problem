#include <iostream>
#include <bitset>
using namespace std;
int main(){
    int n;
    cin>>n;
    bitset<64> binary(n);
    string yo = binary.to_string();
    //cout<<binary<<'\n';
    int size = binary.size();
    int count = 0;
    for(int i = 0;i<size;i++){
        if(binary[i]==1){
            count+=1;
        }
    }
    cout<<count<<'\n';
}