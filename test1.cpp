#include <iostream>
using namespace std;

void sort(int array[],int arrays[],int size){
    int temp = 0;
    for(int i = 0;i<size-1;i++){
        for(int j = i+1;j<size;j++){
            if(array[j]<array[i]){
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;

                temp = arrays[j];
                arrays[j] = arrays[i];
                arrays[i] = temp;
            }
        }
    }
}

int main() {
    int s,n;
    cin>>s>>n;
    int dragon_hp[n];
    int bonus[n];
    int t = n;
    int d = 0;
    int p = 0;
    while(t--){
        int dragon,bonus_1;
        cin>>dragon>>bonus_1;
        dragon_hp[d] = dragon;
        d+=1;
        bonus[p] = bonus_1;
        p+=1;
    }
    sort(dragon_hp,bonus,n);
    
    //condition check
    int no = 0;
    for(int i = 0;i<n;i++){
        if(s<=dragon_hp[i]){
            no+=1;
            break;
        }
        else{
            s+=bonus[i];
        }
    }
    //result
    if(no==1){
        cout<<"NO"<<'\n';
    }
    else{
        cout<<"YES"<<'\n';
    }
}
