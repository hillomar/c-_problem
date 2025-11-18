#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int array[n];
        int in = 0;
        int size = 0;
        for(int i = 0;i<n;i++){
            cin>>in;
            if(in<=n){
                array[size] = in;
                size+=1;
            }
            
        }
        
        //check
        int max = 0;
        for(int i = 0;i<size;i++){
            int m = 0;
            for(int j = 0;j<size;j++){
                if(array[i]%array[j]==0){
                    m+=1;
                }
            }
            if(m>max){
                max = m;
            }
        }
        cout<<max<<'\n';
    }
}