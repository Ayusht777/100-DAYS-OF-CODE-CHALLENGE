// Day - 65 of 100dayofcode [23/09/2022 Friday]

#include <iostream>
#include<string>//string header
#include<sstream> // for string stream

#include<typeinfo> //data type

using namespace std;
int main(){
//Converting Number to String in C++

/*
Converting Number to String in C++

There methods to convert a number to a string, which are as follows:

    Using string Stream 
    Using to_string()
    
*/

//method -  1 

int num {478890};

 ostringstream os;

 os << num;

 string tyc = os.str();

 cout <<tyc<<endl;
 cout <<typeid(tyc).name()<<endl;

 /*

 Method 2: Using to_string()

 The function to_string() accepts a number(which can be any data type) and returns the number in the desired string. 
 */

 
 string x =to_string(num) ;

 cout<<x<<endl;
  cout <<typeid(x).name()<<endl;
 float z =78877.24;
  x =to_string(z) ;

 cout<<x<<endl;
cout <<typeid(x).name()<<endl;
 
   


}