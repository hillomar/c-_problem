#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n = t;
    long long int array1[n+1];
    long long int array2[n+1];
    int a = 1,b = 1;
    long long int a1,b1;
    cin>>a1>>b1;
    array1[0] = a1;
    array2[0] = b1;
            for(int i = 2;i<n*2;i++){
            long long int x;
            cin>>x;
            
            if(i%2==0){
                array1[a] = x;
                a+=1; 
            }
            else{
                array2[b] = x;
                b+=1;
            }
        }
        array1[a] = a1;
        array2[b] = b1;
    // for(int i = 0;i<=a;i++){
    //     cout<<array1[i]<<" "<<array2[i]<<'\n';
    // }
    //math
    long long int sum1=0;
    long long int sum2=0;
    for(int i = 0;i<a;i++){
        sum1+=array1[i]*array2[i+1];
        sum2+=array2[i]*array1[i+1];
    }
    long long int final = sum1-sum2;
    if(final<0){
        final=final*(-1);
    }
    cout<<final<<'\n';

}