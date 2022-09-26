// Day - 68 of 100dayofcode [26/09/2022 Monday]

#include <iostream>
#include<string> 
#include<vector>
//how function call

using namespace std;

int func2(int &x,int a,int b){
  x+=a+b;

}
int func1(int a,int b){
  int result{};
  result = a+b;
  func2(result,a,b);
  return(result);

}

int main(){

  int x {11};
  int y {22};
  int z{};

  z= func1(x,y);

  cout<<z<<endl;

 
}