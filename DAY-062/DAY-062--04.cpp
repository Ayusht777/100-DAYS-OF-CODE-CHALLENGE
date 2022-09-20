// Day - 62 of 100dayofcode [20/09/2022 Tuesday]

#include <iostream>

//


using namespace std;
int main(){
  
//logical
// range checkeer
 int x{10},y{25},num{0};
 cout << boolalpha; // all output will be in true/false

 cout << "enter a intger between "<<x<<" and "<<y <<" : "<<endl;
 cin >>num;
cout << num << " is between the range 10 and 25 :" <<(num > x && num <y)<<endl;
cout << num << " is between the range 10 and 25 :" <<(num>x  || num <y)<<endl;





  
}