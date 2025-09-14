#include <iostream>
#include <string.h>
using namespace std;
int main(){
    string word;
    cin>>word;
    int size = word.size();
    int q;
    cin>>q;
    while(q--){
        char letter;
        cin>>letter;
        if(letter=='U'){
            int i;
            char c;
            cin>>i>>c;
            //update korbo
            word[i-1] = c;
            //cout<<word<<'\n';
        }
        else if(letter=='D'){
            int a;
            cin>>a;
            int d = 0;
            //delete korlam
            int time = (size-a);
            while(time>0){
                word[a-1] = word[a];
                a+=1;
                time-=1;
            }
            word[size-1] = '\0';
            //cout<<word<<'\n';
        }
        else if(letter=='C'){
            int b,c;
            cin>>b>>c;
            string pal;
            int f = 0;
            for(int i = b-1;i<c;i++){
                pal[f] = word[i];
                f+=1;
            }
            //pal[f] = '\0';
            //cout<<"rev_pal== "<<strrev(pal)<<'\n'; 
            //check if 
            //cout<<pal<<'\n';
            int check = 0;
            int soze = pal.size();
            string revi;
            int g = 0;
            for(int i = soze;i>=0;i--){
                revi[g] = pal[i];
                g+=1;
            }
            revi[g] = '\0';
            //cout<<revi<<'\n';
            for(int i = 0;i<soze;i++){
                if(pal[i]!=revi[i]){
                    check+=1;
                    break;
                }
            }
            if(check==0){
                cout<<"Yes!"<<'\n';
            }
            else{
                cout<<"No!"<<'\n';
            }
        }
    }
}