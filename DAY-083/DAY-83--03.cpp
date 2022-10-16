// error handling

#include <iostream>
#include <string>
#include <memory>

using namespace std;

class Illegalbalexp{
  public:
  Illegalbalexp() =default;
  ~Illegalbalexp() =default;

};

class Account{
  private:
  string name;
  double balance;

  public:


  Account(string n,double b):name{n},balance{b}{ 
    if (b<0.0)
    {
      throw Illegalbalexp(); //throeing a illegal exp constructor

    }
  };
  ~Account(){};

};



int main(){

   try{
    unique_ptr <Account> new_a = make_unique <Account> ("ayush",-100.0);
   }

   catch(const Illegalbalexp &i){
    cerr<<"Couldnot create a account due to negative balance";

   }






}