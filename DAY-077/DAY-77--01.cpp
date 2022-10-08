// Day - 77 of 100dayofcode [08/10/2022 Saturday]

#include <iostream>
#include <string>
#include "Account.h"

using namespace std;





int  main(){

  //account  class
  Account a{};
  cout<<"___________________ACCOUNT CLASS__________________________________"<<endl;
  a.deposit(500);
  a.widthraw(200);
  cout <<a.bal;
  cout<<endl;

  Account *p{nullptr};
  cout<<"___________________ACCOUNT CLASS__________________________________"<<endl;
  p = new Account();
  p->deposit(5210);
  p->widthraw(2222);
  cout<<p->bal;
  delete p;
  cout<<"\n==================================================="<<endl;
  Saving a1{};
  cout<<"___________________Saving CLASS__________________________________"<<endl;
  a1.deposit(500);
  a1.widthraw(200);
  cout <<a1.bal;
  cout<<endl;

  Saving *p1{nullptr};
  cout<<"___________________Saving CLASS__________________________________"<<endl;
  p1 = new Saving();
  p1->deposit(5210);
  p1->widthraw(2222);
  cout<<p1->bal;
  cout<<"\n"<<p1->int_r;
  delete p1;

  









}

