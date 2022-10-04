#include<iostream>
#include "player.h"


using namespace std;

void display(){
    cout<<"ACTIVE PLAYERS : "<<Player::get_num()<<endl;
}

int main(){

    Player p1{"ayush",11};
    display();
    Player p2 {"divyanshu",450};
    display();

  Player *enemy = new Player("divayanshu",55);
  display();
  delete enemy;
  display();
   

}