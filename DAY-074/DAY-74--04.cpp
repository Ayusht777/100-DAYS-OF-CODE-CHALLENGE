// Day - 74 of 100dayofcode [03/10/2022 Monday]

#include <iostream>
#include<string>

using namespace std;

class Player{
 private:
    string name;
    int xp;
public:
    //functions 
    string get_name(){
        return name;
    }
    int get_xp(){
        return xp;
    }
    Player(string="none",int=0);

   // copy coantructor
   Player(const Player &source);
   // destructor 
   ~Player(){
    cout<<"destuctor is called "+name<<endl;
   }

};








Player::Player(string name_v,int xp_v)
  :name{name_v} ,xp{xp_v}{
      cout<<"3 args constructor called "<<name<<endl;

  } 

Player::Player(const Player &source)
    :name{source.name},xp{source.xp}{
    cout<<"copy constructor called"+ source.name<<endl;
    }



//outer function
void diplay(Player p1){
    cout<<"Name : "<<p1.get_name()<<endl;
    cout<<"xp : "<<p1.get_xp()<<endl;
}

int main(){

    Player a1;
    diplay(a1);
    Player a2("ayush");

    Player a3("ayush",55);
    Player a4(a3);
    diplay(a4);




 






}