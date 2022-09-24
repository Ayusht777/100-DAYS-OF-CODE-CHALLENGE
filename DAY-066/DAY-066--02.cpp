// Day - 66 of 100dayofcode [24/09/2022 Saturday]

#include <iostream>
#include<cmath>

//

using namespace std;
int main(){

    double num{0};

    double powx{1};

    cout << "ENTER A NUMBER :";
    cin>>num;

    cout << "THE Sqrt : "<<sqrt(num)<<endl;

    cout << "THE cubert : "<<cbrt(num)<<endl;


    cout << "THE Sin value : "<<sin(num)<<endl;

    cout << "THE cos value : "<<cos(num)<<endl;
  
  cout << "THE Ceil / round off : "<<ceil(num)<<endl;
  cout << "THE floor : "<<floor(num)<<endl;

  cout <<"the round of :  "<<round(num)<<endl;

  cout<<"THE POWER OF THE NUMBER TO RAISED : ";
  cin>>powx;
  cout <<"pow : "<<pow(num,powx)<<endl;






}