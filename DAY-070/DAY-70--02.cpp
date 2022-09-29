// Day - 70 of 100dayofcode [29/09/2022 Thrusday]

#include <iostream>

using namespace std;




//relationship between array and pointer
int main(){

  int num_arr[] {44,1,650};

  cout<<"value of num array : "<<num_arr<<endl; // it will print the base address of this array
  
  int *num_arr_ptr{num_arr};

  cout <<"value of num array pointer : "<<num_arr_ptr<<endl; //the address will be same
  cout <<"---------------------------------------------------"<<endl;
  cout <<"\nARRAY SUBSCRIPT NOTATION "<<endl;
  cout <<num_arr[0]<<endl;
  cout <<num_arr[1]<<endl;
  cout <<num_arr[2]<<endl;
  cout <<"---------------------------------------------------"<<endl;
  cout <<"\nPOINTER SUBSCRIPT NOTATION "<<endl;
  cout<<num_arr_ptr[0]<<endl;
  
  cout<<num_arr_ptr[1]<<endl;
  cout<<num_arr_ptr[2]<<endl;

  cout <<"---------------------------------------------------"<<endl;
  cout <<"\nARRAY OFFSET NOTATION "<<endl;
  cout <<*num_arr<<endl;
  cout <<*(num_arr + 1)<<endl;
  cout <<*(num_arr + 2)<<endl;
  
  cout <<"---------------------------------------------------"<<endl;
  cout <<"\nPOINTER OFFSET NOTATION "<<endl;
  cout <<*num_arr_ptr<<endl;
  cout <<*(num_arr_ptr + 1)<<endl;
  cout <<*(num_arr_ptr + 2)<<endl;




  



}