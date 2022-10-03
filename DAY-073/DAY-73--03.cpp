// Day - 73 of 100dayofcode [02/10/2022 Sunday]

#include <iostream>
#include<string>
#include "Bank.h"

using namespace std;






int main(){
  //test
  Bank b1;
  b1.set_name("ayush");
 
  b1.set_balance(50000.00);

  b1.deposit(50000.00);
  cout<<"BANK\n-----------------------------------------------\n"<<endl;
  b1.get_name();
  b1.get_balance();
  
   cout<<"\n-----------------------------------------------\n"<<endl;
   b1.widthraw(1000);


  






}