// Day - 61 of 100dayofcode [15/09/2022 Thrusday]

#include <iostream>



/// assigment operation
using namespace std;
int main(){
  
  int x{10};
  int y {54};

  cout << x << " :: " << y <<endl;
  x = 47;
  y =x;
  cout << x << " :: " << y <<endl;
  y  = x =1000;
  cout << x << " :: " << y <<endl;

  cout <<"\n@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
 // arthemtic opertion

 x= 55;
 y = 12;

 cout << x << " + " << y << " = " << x+y <<endl;

 cout <<"\n"<< x << " - " << y << " = " << x-y <<endl;
 
 cout <<"\n"<< x << " * " << y << " = " << x*y <<endl;
 
 cout <<"\n"<< x << " / " << y << " = " << x/y <<endl;
 
 cout <<"\n"<< x << " % " << y << " = " << x%y <<endl;

 cout <<"\n"<< 5.0/2.4<<endl;


 cout <<"\n@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
// usd to rupee

const double usdv{79.66};
double usd {0};
double rupee {0};

cout << "Enter the value of Usd $ : ";
cin >> usd;
rupee = usd * usdv;
cout << "The value of rupee : " <<rupee << endl; 



 






}