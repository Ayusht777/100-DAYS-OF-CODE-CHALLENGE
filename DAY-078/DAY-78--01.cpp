// Day - 78of 100dayofcode [09/10/2022 Sunday]

#include <iostream>
#include<string>


using namespace std;


class Base{

  public:

  int a{0};
  void display(){
    cout<<a<<","<<b<<","<<c<<endl;
  }
  protected:
  int b{0};
  private:
  int c{0};


};

class dervied :public Base{
  public:
   void aa(){
    a =100;
    b = 400;
    // c =100;
   }

};

int  main(){

  cout<<"__________________base class________________________"<<endl;
  Base b;
  cout<<b.a<<endl;
  b.display();
  // b.c = 500; comiler error

  cout<<"___________________________dervied class______________________"<<endl;
  dervied d;
  cout<<d.a<<endl;
  d.aa();
  d.aa();



 



}

