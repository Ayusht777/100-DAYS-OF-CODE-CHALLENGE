// Day - 62 of 100dayofcode [20/09/2022 Tuesday]

#include <iostream>

//


using namespace std;
int main(){
  //section challange

  int dollar_v {100},quater_v{25},dime_v{10},nickle_v{5},amount{0};
  int balance {0},dollar{0},quaters{0},dime{0},nickle{0},pennies{0};
  
  cout<< "enter amount : "<<endl;
  cin >> amount;

  dollar = amount / dollar_v;
  balance  = amount%dollar_v;
  quaters = balance/quater_v;
  balance%=quater_v;
dime = balance/dime_v;
  balance%=dime_v;
  nickle = balance/nickle_v;
  balance%=nickle_v;
 
  pennies = balance;

  cout << "dollars : " <<dollar<<endl;
  cout << "quaters : " <<quaters<<endl;
 
  cout << "dime : " <<dime<<endl;
   cout << "nickle : " <<nickle<<endl;
  cout << "pennies : " <<pennies<<endl;





  
}