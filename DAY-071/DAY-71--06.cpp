// Day - 71 of 100dayofcode [30/09/2022 Friday]

#include <iostream>
#include <vector>
// dynmacis incrmnet version

using namespace std;



//refrenceing
int main(){
  int num{100};
  int &ref{num};

  cout<<num<<endl;
  cout<<ref<<endl;
  cout<<"__________________________________________"<<endl;
  num = 214;
  cout<<num<<endl;
  cout<<ref<<endl;
  ref = 778;
  cout<<"__________________________________________"<<endl;
  cout<<num<<endl;
  cout<<ref<<endl;
  cout<<"__________________________________________"<<endl;

  vector <string> s {"ayush","piyush","dan"};

  for(auto x :s){
    cout<<x<<endl;
  }
    cout<<"__________________________________________"<<endl;
  for(auto &x :s){
    x = "ken";
    cout<<x<<endl;

  }
  cout<<"__________________________________________"<<endl;
  for(auto const &q:s){
    cout<<q<<endl;

  }
  



}