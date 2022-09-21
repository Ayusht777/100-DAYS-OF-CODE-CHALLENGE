// Day - 63 of 100dayofcode [21/09/2022 Wednesday]

#include <iostream>

//contorl statemnet


using namespace std;
int main(){

char x {};
cout << "ENTER YOUR EXCPETED NUMBER TO SEE YOUR GRADE : ";
cin >>x;

switch (x)
{
case 'a':
case 'A':
  cout << "The number is betwenn 100 and 90";
  break;
case 'b':
case 'B':
  cout << "The number is betwenn 90 and 80";
  break;
case 'c':
case 'C':
  cout << "The number is betwenn 80 and 70";
  break;
case 'd':
case 'D':
  cout << "The number is betwenn 70 and 60";
  break;
case 'e':
case 'E':
  cout << "The number is betwenn 60 and 50";
  break;
case 'f':
case 'F':
  cout << "The number is below 50";
  break;

default:
   cout <<"enter a correct grade"<<endl;
   break;
}
  
}