// Day - 71 of 100dayofcode [30/09/2022 Friday]

#include <iostream>
#include<vector>
#include<string>

using namespace std;

void display_v(vector <string> *s){

  for(auto i : *s){
    cout<<i<<",";

  }
  cout<<endl;
  


   

}

void display_a(int *arr ,int checker){
   
   while(*arr != checker){
    cout <<*arr++<<endl;

   }
   

}


//passing pointers to function 
int main(){
  vector <string> names {"Ayush","piyush","divyanshu"};
  
  cout <<"THE DISLPAY FUNCTION FOR VECTOR :"<<endl;
  display_v(&names); // passing base address of it to the function
cout <<"-------------------------------------------------"<<endl;
  int arr[]{1,2,4,8,9,9,637,89,64,-5};

   cout <<"THE DISLPAY FUNCTION FOR STRING :"<<endl;
   display_a(arr,-5);



  
  
 
  
  




  



}