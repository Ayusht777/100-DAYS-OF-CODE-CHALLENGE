// Day - 71 of 100dayofcode [30/09/2022 Friday]

#include <iostream>

using namespace std;

void swap(int *a ,int *b){
  int temp_p = *a; // storing valeu of a in temp a int variable
  
  *a = *b;
  *b = temp_p;

   

}


//passing pointers to function 
int main(){

  int x{111},y{222};

  cout <<"VALUE OF X : "<<x<<endl;

  cout <<"VALUE OF Y : "<<y<<endl;

  swap(&x,&y); //pasing address of x and y
  cout <<"\n_______________________________________________\n"<<endl;
  cout<< "after swap function \n"<<endl; 
  cout <<"VALUE OF X : "<<x<<endl;

  cout <<"VALUE OF Y : "<<y<<endl;

  
 

  




  



}