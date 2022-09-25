// Day - 67 of 100dayofcode [25/09/2022 Sunday]

#include <iostream>

#include<string>
#include<vector>
// pssing a array to function

using namespace std;

void printa(int ar[],size_t size_arr){

  for(size_t i{0};i<size_arr;i++)
  {
    cout << ar[i]<<endl;
  }
    
  cout <<"---------------------------------"<<endl;
}

void printb(int ar[] ,size_t size_arr ,int modify_value){

  for (size_t i{0};i<size_arr;i++ ){

    ar[i] = modify_value;
     ar[0] = 99;
    cout <<ar[i]<<endl;

  }
   ar[0] = 99;
}
// itwill not going to change  just ad const 



int main(){
   
   int ar [] {1,4,5,7,8,9};

   printa(ar,6);

   printb(ar,6,29);
//acutal value has been chnage
   printa(ar,6);

 










}