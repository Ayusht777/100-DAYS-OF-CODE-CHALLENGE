#pragma
#include<string>

using namespace std;

class Player{
 private:
    static int num_p;
    string name;
    int xp;
public:
    //functions 
    string get_name(){
        return name;
    }
    int get_xp (){
        return xp;
    }
  
    Player(string val,int n);
    //copy construcotr

    Player(const Player &source);

    //destructor
    ~Player();

   static int get_num();

  
   

};


int Player::num_p{0};

Player::Player(string val,int n)
:name{val},xp{n}
{
  num_p++;
}
Player::Player(const Player &source)
:Player{source.name,source.xp}{
  
}
Player::~Player(){
    num_p--;
}
int Player::get_num(){
    return num_p;
}