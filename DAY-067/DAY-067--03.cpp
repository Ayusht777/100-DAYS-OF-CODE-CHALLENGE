// Day - 67 of 100dayofcode [25/09/2022 Sunday]
#include <iostream>

#include<string>
#include<vector>
// fucntion overloading

using namespace std;


void print(int num){
  cout <<num<<endl;
}
void print(double num){
  cout <<num<<endl;
}
void print(string s){
  cout <<s<<endl;
}
void print(string s ,string x){
  cout <<s<<x<<endl;
}

void print(vector<string> x){
  for (auto z :x ){
    cout << z +" ";
    
  }
  cout <<endl;
}



int main(){
   

   print(54); //INT VERISON
   print('w');// it will goign to covert the char into ascii 
   print(45.45); //double version

   print(145.4F);//folat version going to promet to double

   print("C-style string"); // cstyle to c++ string
   
   string x {"c++ style"};//c++ style
   print(x);

   print("cstyle",x);
   vector <string> q {"dadadasd","sdadasdasd"};
   print(q);









}