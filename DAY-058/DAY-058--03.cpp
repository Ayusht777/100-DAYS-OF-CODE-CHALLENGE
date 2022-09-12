// Day - 5️8 of 100dayofcode [12/09/2022 Monday]

#include <iostream>
//data type

using namespace std;
int main(){
  
   int a {6456};
   long x{55846464};
   long long z{45465645645646};
   cout << a  << "," << x << "," << z <<endl;
   

   // char
   char q{'e'};
   cout << q <<endl;
   
   // 
   float f {0.15};
   double   f1 {564.6548};
   long double f2 {54.54664656};
   
   cout << f  << "," << f1 << ","<<f2 <<endl;
   //boolean
 
   bool b {false};
   cout <<b <<endl;

   // overflow 
  short a1 {1000} ,a2{30014};
  short mul{a1 * a2};

  cout << a1 << "::" << a2 << "::" << mul << endl;

}