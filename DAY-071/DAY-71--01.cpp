// Day - 71 of 100dayofcode [30/09/2022 Friday]

#include <iostream>

using namespace std;

void twice_p(int *npointer){
  *npointer = *npointer *2;
  // *npointer*=2

}


//passing pointers to function 
int main(){

  int v{11};
  int *p_v{nullptr};

  cout<<"the num : "<<v<<endl;
 
  twice_p(&v); // it will going to change the actual value
  
 cout<<"the num : "<<v<<endl;

 cout<<"___________________________________"<<endl;

 p_v = &v;

 twice_p(p_v);
 cout<<"value : "<<v<<endl;

 

  




  



}