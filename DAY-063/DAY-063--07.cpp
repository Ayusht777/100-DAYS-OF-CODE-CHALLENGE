// Day - 63 of 100dayofcode [21/09/2022 Wednesday]

#include <iostream>
#include<vector>

//looping


using namespace std;
int main(){
//for loop range

  int numa [] {1,2,5,69,7};

  for (int i : numa){

    cout <<i<<endl;
  }
  cout <<"==========="<<endl;
//the auto version
  for (auto i : numa){

    cout <<i<<endl;
  }
 cout <<"==========="<<endl;

 vector <int> x {1,57,8,89};

 for (auto i : x){

  cout <<i<<endl;
 }
 for (int i : x){

  cout <<i<<endl;
 }
cout <<"==========="<<endl;









}

