// Day - 68 of 100dayofcode [26/09/2022 Monday]

#include <iostream>
#include<string> 
#include<vector>
//functions

using namespace std;
// call by refenrece
void pass_by_re_1(int &num){
  num =111;

}
void pass_by_re_2(string &s){
  s = "pass by refeence";

}
void pass_by_re_3(const vector <string> &v){

  for(auto x :v){
    cout <<x<<endl;
  }
  

}


int main(){

  int num {14};
  string x {"new"};
  vector <string> s {"sadas","dadaasdas"};

  cout <<num<<endl;
  pass_by_re_1(num);
  cout<<num<<endl;//so acutal vaule get updtae

  cout <<x <<endl;
  pass_by_re_2(x);
  cout<<x<<endl;
  
  for(auto z :s){
    cout <<z<<endl;
  }
  pass_by_re_3(s);

  




}