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
    name = "None";
    health =100;
    xp = 100;

  }
  //explcit constructor
  Player(string name_v ,int health_v,double xp_v){
    name = name_v;
    health = health_v;
    xp = xp_v;

  }

  void get_info(){
    cout<<"name : "+ name<<",health : "<<health<<",xp : "<<xp<<endl;; 
  }


};





int main(){

  Player a1;
  a1.get_info();

  Player a2{"ayush",100,500}; //calling style of constructor
   
  a2.get_info();

  
  
 



}