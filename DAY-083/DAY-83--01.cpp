// error handling

#include <iostream>
using namespace std;

void func_b();
void func_c();

void func_a(){
  cout<<"____________________________________"<<endl;
  cout<<"Starting function A"<<endl;
  try{
 
  func_b();

  }

  catch(int &z){
     cerr<<"Show a Error"<<endl;


  }
  cout<<"Ending function A"<<endl;
}

void func_b(){
   cout<<"____________________________________"<<endl;
  cout<<"Starting function B"<<endl;
  func_c();

  cout<<"Ending function B"<<endl;

}

void func_c(){
     cout<<"____________________________________"<<endl;
  cout<<"Starting function C"<<endl;

  throw 101;
  

    cout<<"Ending function C"<<endl;
}


int main(){

  cout<<"Starting Main "<<endl;
  try{
  func_a();
  }
  catch(int &x){
    cerr<<"Show a Error"<<endl;

  }

      cout<<"Ending Main"<<endl;

 



    



}