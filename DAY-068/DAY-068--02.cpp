// Day - 68 of 100dayofcode [26/09/2022 Monday]

#include <iostream>
#include<string> 
#include<vector>
//functions

using namespace std;
int g_num{788};
// call by refenrece
int l_func(int x){
  int num = x;
  cout <<num<<endl;
}

void g_func(){
   cout <<g_num<<endl;
  g_num=g_num*2;
  cout <<g_num<<endl;


}
void static_func(){
  static int num{100};
  cout <<num<<endl;
  num+=200;
  cout<<num<<endl;
}


int main(){

  int num1{145};
  int num2{45};
  cout << "LOCAL "<<num1<<endl;
  {
    //inner scope

    int num1{48};

    cout <<"inner scope "<<num1<<endl;
    cout<<"local num2 "<<num2<<endl;

  }
  l_func(44);
  l_func(49);

  g_func();

  
  for(int  i=1;i<5;i++){

    static_func();
  }


  



}