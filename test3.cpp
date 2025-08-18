#include <iostream>
#include <vector>
using namespace std;

void re_arrange(vector<int>& number);

int main(){
    int n,q,n1;
    cin>>n>>q; //input size and length
    vector<int> number;
    for(int i = 0;i<n;i++){
        cin>>n1;
        number.push_back(n1);
    }
    //prefix-sum theory
    re_arrange(number);
    while(q>0){
        int l,r;
    cin>>l>>r;
    if((l-1)<0){
        cout<<number[r]<<'\n';
    }
    else{
        cout<<number[r]-number[l-1]<<'\n';
    }
    q--;
    }

}
void re_arrange(vector<int> &number){
    int add = 0;
    for(auto i = 0;i<number.size();i++){
        add+=number[i];
        number[i] = add;
    }
}