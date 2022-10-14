// Day - 81 of 100dayofcode [14/10/2022 Friday]

#include <iostream>
#include <vector>

using namespace std;

class account{
    public:
    virtual void withdraw(double num){
        cout<<"In Account :: Withdraw "<<endl;

    }
    virtual ~account(){
       
    }

};

class savings :public account{
     public:
    virtual void withdraw(double num){
        cout<<"In Savings :: Withdraw "<<endl;
    }

    virtual ~savings (){
       
    }


};
class checking :public account{
     public:
    virtual void withdraw(double num){
        cout<<"In Checking :: Withdraw "<<endl;
    }

    virtual~checking(){
      
    }

};
class trust :public account{
     public:
    virtual void withdraw(double num){
        cout<<"In Trust :: Withdraw "<<endl;
    }

     virtual ~trust(){
        
    }


};


void dox(account &diiferntclass,double amount){
    diiferntclass.withdraw(amount);
}










int main(){
  account a;
  account &ref1 =a;
  ref1.withdraw(500);

 savings x ;
  account &ref2 = x;
  ref2.withdraw(5000);

  account a1;
  savings a2;
  checking a3;
  trust a4;

  dox(a1,100);
  dox(a2,100);
  dox(a3,100);
  dox(a4,100);




   
    



 

}



