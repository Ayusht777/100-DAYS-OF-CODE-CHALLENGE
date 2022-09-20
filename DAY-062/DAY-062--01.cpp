// Day - 62 of 100dayofcode [20/09/2022 Tuesday]

#include <iostream>

//


using namespace std;
int main(){
  
//task

  int num1{0} , num2{0} , num3 {0};
  int total{0};
  double avg{0};
  
  cout << "ENTER 3 INTGER : "<<endl;
  cin >> num1>>num2>>num3;
  total = num1 + num2 + num3;

  avg = static_cast<double> (total)/3;

  cout<<"THE NUMBERS ARE : "<<num1<<","<<num2<<","<<num3<<endl;

  cout << "THE SUM : "<<total<<endl;

  cout << "THE AVG : "<<avg<<endl;




  
}