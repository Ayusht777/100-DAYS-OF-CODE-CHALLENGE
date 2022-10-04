// Day - 75 of 100dayofcode [04/10/2022 Tuesday]


#include <iostream>
#include<string>

using namespace std;

class Player{
 private:
    string name;
    int xp;
public:
    //functions 
    string get_name() const{
        return name;
    }
    int get_xp ()const{
        return xp;
    }
    Player();
    Player(string val);
    Player(string val,int n);

  
   

};

Player::Player(string val)
: name{val}
{

}
Player::Player(string val,int n)
: name{val},xp{n}
{

}

void display(const Player &p){
  cout<<p.get_name()<<endl;
}


int main(){

  const Player p1{"ayush",55};
display(p1);



}