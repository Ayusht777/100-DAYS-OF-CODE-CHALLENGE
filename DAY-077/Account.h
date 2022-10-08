#pragma
#include<iostream>
#include<string>
using namespace std;
class Account{

    public:
    double bal;
    string name;

    void deposit(double amount);
    void widthraw(double amount);

    //constructor

    Account();

    ~Account();







};

Account ::Account()
:name{"account"},bal{0.00}{

}

Account::~Account(){
    
}


void Account::deposit(double uamount){
    if(uamount>0){
        bal +=uamount;
        cout<<"ACCOUNT CLASS CALLED AND BALANCED GET DEPOSITED : "<<uamount<<endl;
        
    }
    else{
        cout<<"enter right amount"<<endl;
    }
}   

void Account::widthraw(double uamount){
    if(uamount<bal){
        bal -=uamount;
        cout<<"ACCOUNT CLASS CALLED AND BALANCED GET DEPOSITED : "<<uamount<<endl;
    }
    else{
        cout<<"enter right amount"<<endl;
    }

}


class Saving:public Account
{

    public:
    double int_r;
    
      Saving();

    ~Saving();


    //constructor

 






};

Saving::Saving()
:int_r{4.0}{
    
}

Saving::~Saving(){

}

