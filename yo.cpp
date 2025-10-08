#include <bits/stdc++.h>
using namespace std;

void calculation(float meal,float joma,float &pabe,float &pabo,float khori,int &pacce,int &dicce,float &total_khoroch){
    float total = (meal*83.2)+250+khori;
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
    float bordar = 42;
    float pabe = 0;
    float pabo = 0;
    float khori = 220;
    int com_dicce = 0;
    int pacce = 0;
    int dicce = 0;
    int total_joma = 0;
    float total_khoroch = 0;
    float total_meal = 0;
    int serial = 1;
    while(bordar--){
        float meal,joma;
        cin>>meal>>joma;
        total_meal+=meal;
        total_joma+=joma;
        if(meal<11&&meal>6){
            khori = 110;
        }
        else if(meal<6&&meal>3){
            khori = 70;
        }
        else if(meal<=3){
            khori = 30;
        }
        else if(meal==15){
            khori = 180;
        }
        else if(meal<15&&meal>11){
            khori = 170;
        }
        else if(meal>15&&meal<18){
            khori = 200;
        }
        else{
            khori = 220;
        }
        int minus = joma - ((meal*83.2)+250+khori);
        int plus = ((meal*83.2)+250+khori) - joma;
        calculation(meal,joma,pabe,pabo,khori,pacce,dicce,total_khoroch);
        cout<<"No: "<<serial<<"\nkhoroch: "<<int((meal*83.2)+250+khori);
        (((meal*83.2)+250+khori))<joma ? cout<<" Pabe: "<<minus : cout<<" Pabo: "<<plus;
        cout<<'\n'<<'\n';
        serial+=1;
    }
    cout<<"Total meal: "<<total_meal<<'\n';
    cout<<"Total joma: "<<total_joma<<'\n';
    cout<<"Total khoroch: "<<total_khoroch<<'\n';
    cout<<"khorir taka kom dicce: "<<com_dicce<<'\n';
    cout<<"Pabe: "<<pabe<<" Pacce: "<<pacce<<'\n';
    cout<<"Pabo: "<<pabo<<" Dicce: "<<dicce<<'\n';
}
