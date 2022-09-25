// Day - 67 of 100dayofcode [25/09/2022 Sunday]

#include <iostream>
#include<string> 
#include<vector>
//functions

using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector <string> v);


void pass_by_value1(int num){
    num = 111;

}
void pass_by_value2(string s){

    s = "update";
}

void pass_by_value3(vector <string> v){

    for(auto x : v){
        cout <<x<<endl;
    }
}






int main(){
  

  int num {4};

  cout << "before function : " <<num<<endl;
  pass_by_value1(num);
  cout<<"after function : "<<num<<endl;

  cout<<"_______________________________________"<<endl;

  string x {"ayush"};
  cout << "before function : " <<x<<endl;
  pass_by_value2(x);
  cout<<"after function : "<<x<<endl;

   cout<<"_______________________________________"<<endl;

   vector <string> s {"ayush","talesara"};

   cout << "before function : "<<s[0]<<s[1];
  
  
  cout<<"after function : "<<endl;

  for (auto a :s){
    
    pass_by_value3(s);

  }
   






}