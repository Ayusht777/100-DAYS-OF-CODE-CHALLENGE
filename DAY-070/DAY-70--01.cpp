// Day - 70 of 100dayofcode [29/09/2022 Thrusday]

#include <iostream>

using namespace std;




//dynamci allocation
int main(){

  int *int_ptr{nullptr};

  int_ptr = new int; // decalring a meomry form haep of in type

  cout <<int_ptr<<endl;
  cout<<*int_ptr<<endl;

  *int_ptr = 411;

  cout<<*int_ptr<<endl;

  // now free the storage

  delete int_ptr;

  size_t size_arr{0};

  double *data_p{nullptr};
  cout <<"ENTER SIZE OF ARRAY :"<<endl;
  cin>>size_arr;

  data_p = new double[size_arr]; //new double data type dynmaci array 
  
  cout<<data_p<<endl;

  delete [] data_p; // that how we delete a dynmaci arrya


  



}