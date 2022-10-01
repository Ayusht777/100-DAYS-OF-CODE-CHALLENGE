// Day - 72 of 100dayofcode [01/10/2022 Saturday]

#include <iostream>
#include<string>
#include<vector>

using namespace std;

class Player{
  //attributes
  string name;
  int score;
  int xp;

  //methods
  void print(string);
  void user_info(int);

};

class Account{

  //attributes
  string accountname {"account"};
  double balance {0.00};
  
  bool deposit(double);
  bool withdraw(double);



};

//OOPS
int main(){

Player ayush;
Player piyush;

Player playername[] {ayush,piyush};

Player *player_p{nullptr};

player_p = new Player;

delete player_p;

 vector <Player> p{ayush};
 p.push_back(piyush);
  
 Account akse;
 Account pk;



}