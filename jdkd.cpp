#include <iostream>
using namespace std;

class bank_account{
    public:
    int ac_no;
    string ac_name;
    float balance;
    //construct
    bank_account(int a,string b,float c){
        this->ac_no = a;
        this->ac_name = b;
        this->balance = c;
    }
    public:
    void withdraw(float ammount){
        if(ammount<=balance){
            balance-=ammount;
            cout<<"Done! New balance is "<<balance<<endl;
        }
        else{
            cout<<"Insufficient ammount!";
        }
    }

};

int main(){
    int check;
    bank_account no1 = {13,"me",490};
    cout<<"tell me yr account no: ";
    cin>>check;
    bank_account* current = nullptr;
    float ammount;
    if(check == no1.ac_no){
        cout<<"Wellcome "<<no1.ac_name<<endl;
        cout<<"enter yr withdrawn ammount: ";
        cin>>ammount;
        no1.withdraw(ammount);
    }
    return 0;
}