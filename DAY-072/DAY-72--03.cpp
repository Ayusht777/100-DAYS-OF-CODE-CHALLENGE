// Day - 72 of 100dayofcode [01/10/2022 Saturday]

#include <iostream>
#include<string>
#include<vector>

using namespace std;

class Player{
  public:
  //attributes
  string name;
  int score;
  int xp;

  //methods
  void print(string user_text){
    cout<<"\n"+name +" says "+user_text <<endl;
  };
  void user_info(){
    cout <<"\n"+name+" has score of "<<score<<" and xp of "<<xp<<endl;
  };


};

class Account{
 public:
  //attributes
  string accountname;
  double balance ;
  
  bool deposit(double bal){
    balance +=bal;
    cout<<"deposit"<<endl;
  };
  bool withdraw(double bal){
    balance -=bal;
    cout<<"withdraw"<<endl;
  };



};

//OOPS
int main(){

Player p1;
// p1.name = "ayush"; compiler error becuase the attribute is private so we have to make it public
p1.name ="ayush";
p1.score = 55;
p1.xp = 100;
p1.print("how are you ?");
p1.user_info();

Player *villan = new Player;

// drefencing using pointer m-1
(*villan).name  = "none";
(*villan).score = 489;
villan->xp = 500;
villan->print("I WILL KILL YOU!");
villan->user_info();


Account a1;
a1.accountname="ayush";
a1.balance =5000;
a1.deposit(1000);
a1.withdraw(100);


}