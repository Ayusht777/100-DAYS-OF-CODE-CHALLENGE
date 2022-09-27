// Day - 68 of 100dayofcode [26/09/2022 Monday]

#include <iostream>
#include<string> 
#include<vector>
//functions

using namespace std;
// pointers


int main(){

  int num{11};

  cout <<"value of num "<<num<<endl;
  cout<<"size of num "<<sizeof(num)<<endl;
  cout<<"address of num "<<&num<<endl;
  cout<<"______________________________________"<<endl;

  int *p; // a undallocated pointer
  cout <<"value of pointer "<<p<<endl; // it is garbage now
  cout<<"size of num "<<sizeof(p)<<endl;
  cout<<"address of num "<<&p<<endl;
  cout<<"______________________________________"<<endl;
  p = nullptr;

  cout <<"value of pointer "<<p<<endl; 
  cout<<"size of num "<<sizeof(p)<<endl;
  cout<<"address of num "<<&p<<endl;
  cout<<"______________________________________"<<endl;

 // diffrent dtat type pointer

 int *p1{nullptr};
 double *p2{nullptr};
 unsigned long long *p3{nullptr};
 vector <string> *p4 {nullptr};
 string *p5 {nullptr};

 cout <<"size of int pointer : "<<sizeof(p1)<<endl;
 cout <<"size of double pointer : "<<sizeof(p2)<<endl;
 cout <<"size of unsigned long long pointer : "<<sizeof(p3)<<endl;
 cout <<"size of vector string pointer : "<<sizeof(p4)<<endl;
 cout <<"size of string pointer : "<<sizeof(p5)<<endl;
  cout<<"______________________________________"<<endl;

  int *px{nullptr};
  int v{155};

  px =&v;

  cout <<"value of pointer "<<px<<endl; 
  cout<<"size of px "<<sizeof(px)<<endl;
  cout<<"value of num_ptr "<<&px<<endl;


 





}