// Day - 69 of 100dayofcode [27/09/2022 Tuesday]

#include <iostream>
#include<string> 
#include<vector>
//functions

using namespace std;
// derefencing pointers


int main(){

  int num{101};
  int *num_ptr{&num};

  cout <<*num_ptr<<endl;
  
  *num_ptr = 454;

  cout <<*num_ptr<<endl;
  cout <<num<<endl;

  cout <<"_____________________________________"<<endl;

  double lt{4.17};
  double ht {47.17};

  double *temp{&ht};
  cout<<*temp<<endl;
  cout<< ht <<endl;

  temp = &lt;
  cout<<*temp<<endl;
  cout<<lt<<endl;

  cout <<"_____________________________________"<<endl;


  string name {"ayush"};

  string *name_ptr{&name};

  cout<<*name_ptr<<endl;

  *name_ptr = "veer";
  cout<<*name_ptr<<endl;

  cout<<name<<endl;


  cout <<"_____________________________________"<<endl;


  vector <string> x {"ayush","talesara"};

  vector <string> *x_ptr {&x};

  cout <<(*x_ptr).at(0)<<endl;

  for (auto a :*x_ptr){
    cout <<a<<endl;
  }








  










}