// Day - 70 of 100dayofcode [29/09/2022 Thrusday]

#include <iostream>

using namespace std;




//pointer arthmetic
int main(){

  int num[]{1,2,56,78,-1};
  int *num_ptr{num};

  while(*num_ptr!=-1){
    cout <<*num_ptr<<endl;
     num_ptr++;

  }

  cout <<"\n_____________________________________________"<<endl;
  // both of the loop type will print same output 
  num_ptr =num;
  while (*num_ptr!=-1)
  {
    cout <<*num_ptr++<<endl;
  }

  cout <<"\n_____________________________________________"<<endl;

  string s1{"ayush"};
  string s2{"ayush"};
  string s3{"talesara"};

  string *p1{&s1};
  string *p2{&s2};
  string *p3{&s1};

  cout <<boolalpha;

  cout <<p1 <<" == "<<p2<<" : "<<(p1==p2)<<endl;
  

  cout <<p1 <<" == "<<p3<<" : "<<(p1==p3)<<endl;

  cout <<*p1 <<" == "<<*p2<<" : "<<(*p1==*p2)<<endl;
  

  cout <<*p1 <<" == "<<*p3<<" : "<<(*p1==*p3)<<endl;

  p3 =&s3;

  cout <<*p1 <<" == "<<*p3<<" : "<<(*p1==*p3)<<endl;

  cout <<"\n_____________________________________________"<<endl;

  char  name[]{"ayush"}; // it will create an char array

  char *char_ptr_1{nullptr};

  char *char_ptr_2{nullptr};

  char_ptr_1 = &name[0];
  char_ptr_2 = &name[3];

  cout <<"In the string "<<name<<","<<*char_ptr_1<<" is "<<(char_ptr_2-char_ptr_1)<<" charatcters away from "<<*char_ptr_1<<endl;

  

  

  


  


  



}