#pragma
#include<iostream>

using namespace std;
class Account{

    public:
    double bal;
   

    void deposit(double amount);
    void widthraw(double amount);

    //constructor

    Account();

    Account(double Balance);

    ~Account();







};

Account ::Account()
:bal{0.00}{

}

Account::Account(double Balance)
: bal{Balance}
{

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
    if(uamount<bal && bal-uamount<bal){
        bal -=uamount;
        cout<<"ACCOUNT CLASS CALLED AND BALANCED GET DEPOSITED : "<<uamount<<endl;
    }
    else{
        cout<<"Unsufficent Balance"<<endl;
    }

}


class Saving:public Account
{

    public:
    double int_r;
    
    
    Saving();
    Saving(double balance, double int_rate);

    ~Saving();

    void deposit(double amount);

    // withdraw function will be going to inhertaed

    

 






};
Saving::Saving(double baln ,double r)
:Account(baln),int_r{r}{

}

Saving::Saving()
:Saving{0.0,0.0}{
    
}


Saving::~Saving(){

}


void Saving::deposit(double amount){
    amount = amount + (bal*int_r/100);
    Account::deposit(amount);

}