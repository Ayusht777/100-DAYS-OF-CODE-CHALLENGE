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
        cout<<"Account Destructor "<<endl;
    }

};

class savings :public account{
     public:
    virtual void withdraw(double num){
        cout<<"In Savings :: Withdraw "<<endl;
    }

    virtual ~savings (){
        cout<<"Savings Destructor "<<endl;
    }


};
class checking :public account{
     public:
    virtual void withdraw(double num){
        cout<<"In Checking :: Withdraw "<<endl;
    }

    virtual~checking(){
        cout<<"Checking Destructor "<<endl;
    }

};
class trust :public account{
     public:
    virtual void withdraw(double num){
        cout<<"In Trust :: Withdraw "<<endl;
    }

     virtual ~trust(){
        cout<<"Trust Destructor "<<endl;
    }


};










int main(){
    cout<<"+++++++++++++pointers++++++++++++++++"<<endl;
    account *p1 =new account();
    account *p2 =new savings();
    account *p3 =new checking();
    account *p4 =new trust();

    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);


    account *arr[] {p1,p2,p3,p4};

    cout<<"+++++++++++++Array++++++++++++++++"<<endl;

    for(auto i{0};i<4;i++){
        arr[i]->withdraw(1000);
    }

    
   vector <account *> al {p1,p2,p3,p4};

   cout<<"+++++++++++++vector++++++++++++++++"<<endl;

   for (auto l:al){
    l->withdraw(1000);
   }

   cout<<"+++++++++++++++++++delete ptr+++++++++++++++++++++"<<endl;

   delete p1;
   delete p2;
   delete p3;
   delete p4;
   
    



 

}



