#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int y = 0;
        int d = 1;
        while(x>0){
            y += (x%10)*d;
            x/=10;
            d*=10;
        }
        if(x==y){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Solution s1;
    int x;
    cin>>x;
    cout<<s1.isPalindrome(x);

}