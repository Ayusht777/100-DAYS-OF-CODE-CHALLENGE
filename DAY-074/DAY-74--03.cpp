// Day - 74 of 100dayofcode [03/10/2022 Monday]

#include <iostream>
#include<string>

using namespace std;

class Player{
 private:
    string name;
    int xp;
public:
   
    Player(string="none",int=0);

};





Player::Player(string name_v,int xp_v)
  :name{name_v} ,xp{xp_v}{
      cout<<"3 args constructor called"<<endl;

  } 



int main(){

    Player a1;
    Player a2("ayush");
    Player a3("ayush",55);



 






}