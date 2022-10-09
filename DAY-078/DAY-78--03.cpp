// Day - 78of 100dayofcode [09/10/2022 Sunday]

#include <iostream>
#include<string>
# include "Account.h"


using namespace std;


int main()
{
   
  
   Account a1{5000.10};
   cout<<a1.bal<<endl;

   a1.deposit(500);
    cout<<a1.bal<<endl;
   a1.widthraw(545);
   cout<<a1.bal<<endl;

   a1.widthraw(6000);
   cout<<a1.bal<<endl;


   Saving s1{900,10};

   cout<<s1.bal<<endl;
   s1.deposit(100);
     cout<<s1.bal<<endl;
    s1.widthraw(500);
    cout<<s1.bal<<endl;

   
   


  
}
