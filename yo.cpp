#include <bits/stdc++.h>
using namespace std;

void calculation(float meal,float joma,float &pabe,float &pabo,float khori,int &pacce,int &dicce,float &total_khoroch){
    float total = (meal*83.6)+250+khori;
    total_khoroch+=total;
    if(total>=joma){
        pabo+=total-joma;
        dicce+=1;
    }
    else{
        pabe+=joma-total;
        pacce+=1;
    }
}

int main() {
    float bordar = 40;
    float pabe = 0;
    float pabo = 0;
    float khori = 220;
    int com_dicce = 0;
    int pacce = 0;
    int dicce = 0;
    int total_joma = 0;
    float total_khoroch = 0;
    float total_meal = 0;
    while(bordar--){
        float meal,joma;
        cin>>meal>>joma;
        total_meal+=meal;
        total_joma+=joma;
        if(meal<11){
            khori = 120;
            com_dicce+=1;
        }
        else{
            khori = 220;
        }
        calculation(meal,joma,pabe,pabo,khori,pacce,dicce,total_khoroch);
    }
    cout<<"Total meal: "<<total_meal<<'\n';
    cout<<"Total joma: "<<total_joma<<'\n';
    cout<<"Total khoroch: "<<total_khoroch<<'\n';
    cout<<"khorir taka kom dicce: "<<com_dicce<<'\n';
    cout<<"Pabe: "<<pabe<<" Pacce: "<<pacce<<'\n';
    cout<<"Pabo: "<<pabo<<" Dicce: "<<dicce<<'\n';
}
