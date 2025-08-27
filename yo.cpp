#include <iostream>
using namespace std;
int main(){
    int n;
    int q;
    cin>>n>>q;
    int array[n][n];
    string see;
    for(int i = 1;i<=n;i++){
        cin>>see;
        for(int j = 1;j<=n;j++){
            if(see[j-1]=='*'){
                array[i][j] = 1;
            }
            else{
                array[i][j] = 0;
            }
        }
    }
    int array1[q];
    int l = 0;
    //quries
    while(q--){
        int count = 0;
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        for(int j = a;j<=c;j++){
            for(int i = b;i<=d;i++){
            if(array[j][i]==1){
                count+=1;
            }
        }
        }
        array1[l] = count;
        l++;
    }
    for(int i = 0;i<l;i++){
        cout<<array1[i]<<'\n';
    }
}