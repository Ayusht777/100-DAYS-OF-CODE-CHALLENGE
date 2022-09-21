// Day - 63 of 100dayofcode [21/09/2022 Wednesday]

#include <iostream>

//contorl statemnet


using namespace std;
int main(){
  

const int x {10};
const int y {100};
int num{0};

 cout << "ENTER A NUMBER : ";
 cin >> num;

 if(num>x && num <y){

  cout << "THE NUMBER IS BETWEEN " <<x <<" and "<<y <<" : "<<num<<endl;

 }

 if (num == x || num == y){

  cout << "The Number is at a edge "<<endl;

 }





  
}