// Day - 73 of 100dayofcode [02/10/2022 Sunday]

#include <iostream>
#include<string>


using namespace std;
//constructor and destructor
class Player{

  private:
  string name;
  int health;
  double xp;

  public:
  void set_name(string n){
    name =n;
    // setting the name

  }

  //creating constructor
  Player(){
    //construct with no arg
    cout<<"NO args Constructed called"<<endl;

  }
  Player(string name){
    cout<<"String arg Constructed called"<<endl;

  }
  Player(string name,int health,double xp ){
    cout<<"Three args constructor called"<<endl;
  }
  //destructre
  ~Player(){
    cout<<"Destructor called "<<name<<endl;
  }

};





int main(){
  
 
  {
     Player p1;
  p1.set_name("ayush");


  } 
  {
    Player a1;
    a1.set_name("divyanshu");
    Player a2("Piyush");
    a1.set_name("Piyush");
    Player a3("harshit",100,500);
    a3.set_name("harshit");
  } 

  Player *enemy =new Player;
  enemy->set_name("pointer set");

  Player *level = new Player("divyanshu",55,700);

  level->set_name("divyanshu");

  delete enemy;
  delete level;


  






}