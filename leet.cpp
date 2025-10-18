#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    vector<int> a;
    int target;
    void check(vector<int> a,int target,int &b,int &c){
        for(int i = 0;i<a.size()-1;i++){
            for(int j = i+1;j<a.size();j++){
                if(a[i]+a[j]==target){
                    b = i; c = j;
                    break;
                }
            }
        }
    }
};

int main(){
    int *b;
    int *c;
    
}