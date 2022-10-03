#pragma
#include <iostream>
#include<string>

using namespace std;

class Bank{
  private:
     string account_name;
     double balance{0};
     
  public:
  //inline  fuction / fucntion prototyping
  void set_balance(double bal){balance = bal;}
  double get_balance(){
    cout<<"The Current Balanced in Account is : "<<balance<<" $";
    return balance;//it will just give the balance
  }

  void set_name(string n){
    account_name = n;
    

  }

  string get_name(){
    cout<<"The Account Owner Name is : "<<account_name<<endl;
    return account_name;

  }

  // only protyping heree because the logic is big
  
  void deposit(double cash);

  void  widthraw(double cash);
  




};

// function data type class name :: function name { defination }
void Bank::deposit(double cash){
  if(cash > 0){
    balance += cash;
    cout << "The Amount of "<<cash<<" has been succesfully deposited"<<endl;


  }
  else{
    cout<<"Enter correct ammount"<<endl;
  }


}

void Bank::widthraw(double cash){
  if(cash>0 && cash<balance){
    
    cout<<"you have withdrawed "<<cash<<" $ form balanced of "<<balance <<" $"<<endl;
    balance -= cash;
    
    }
   else{
    cout<<"Enter correct ammount"<<endl;
  }

}
