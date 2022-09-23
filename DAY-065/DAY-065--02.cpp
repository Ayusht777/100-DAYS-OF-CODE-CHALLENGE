// Day - 65 of 100dayofcode [23/09/2022 Friday]

#include <iostream>
#include<string>//string header
//string 


using namespace std;
int main(){

    //various type of string delcaration

    string s1; //empty
    
    string s2{"ayush"};
    string s3{s2};
    string s4{"ayush",2};
    string s5{"ayush",2,4}; //indzing
    string s6(5,'X'); //repate thechar 

  cout <<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" "<<s5<<" "<<s6<<endl;
  cout <<s1.length()<<" :: "<<s2.length()<<endl;

  //  string name;

  //  cout<<"enter your name : ";
  //  getline(cin,name); // end with /n
  //  cout << name<<endl;    
  //  cout<<"enter your name : ";
  //  getline(cin,name,'r'); // end with custom char
  //  cout << name<<endl;    
  //  string x =R"(ADAD\nsadad\t)" ; //raw string

  //  cout <<x<<endl;
 cout<<"+++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
  string a{"ayush"};
  string b{"ayush"};
  // str compariosn
 cout <<boolalpha; // to get output as true false
 
 cout <<(a==b)<<endl;
 cout <<(a!=b)<<endl;
 cout <<(a>b)<<endl;
 cout <<(a<b)<<endl;

//asigmnet
 a.at(0) = 'q';
 cout<<a<<endl;

 for (auto c : a){

    cout<<c<<endl;
 }
// numbeer version
 for (int i{0} ; i<a.length();i++){

    cout<<i<<endl;
 }

 for (char i ; i<a.length();i++){

    cout<<a.at(i)<<endl;
 }

 // erase function

 a = "hello wolrd";
  cout<<a<<endl;
 a.erase(2,4);
 cout<<a<<endl;

 
  



}