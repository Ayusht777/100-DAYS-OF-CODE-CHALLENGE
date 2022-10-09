// Day - 78of 100dayofcode [09/10/2022 Sunday]

#include <iostream>
#include<string>


using namespace std;


class Base{

  private:

  int value;

  public:

  Base():value{0}{
    cout<<"Base no-args constructor called "<<endl;
  }
  
  Base(int v):value{v}{
    cout<<"Base with args constructor called "<<endl;
  }

  ~Base(){
    cout<<"Base class Destructor called"<<endl;
      cout<<"_______________________________________________"<<endl;
  }



 
 
 
  


};

class dervied :public Base{
  using Base::Base;
  private:
  int num;
  public:
     dervied():num{0}{
    cout<<"Dervied no-args constructor called "<<endl;
  }
  
  // dervied(int v):num{v*2}{
  //   cout<<"Dervied with args constructor called "<<endl;
  // }

  ~dervied(){
    cout<<"Dervied class Destructor called"<<endl;
      cout<<"_______________________________________________"<<endl;
  }

};

int  main(){

  Base b;
  Base b1(5);


  dervied d;
  cout<<"_______________________________________________"<<endl;
  dervied d1(45);

  dervied d2{55};

 


}

