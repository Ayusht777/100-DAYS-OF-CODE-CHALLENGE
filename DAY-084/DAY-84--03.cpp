// error handling

#include <iostream>
#include<iomanip>
#include<string>

using namespace std;

void len(){
  cout<<"\n01234567890123456789012345678901234567890123456789"<<endl;}


int main(){

 int n1 {4547};
 double n2 {45.154644};
 string  s1 {"hello"};

  cout<<"________using default____________________"<<endl;

  cout<<n1<<n2<<s1<<endl;
  
  cout<<"________oen per line____________________"<<endl;

  cout<<n1<<endl;
  cout<<n2<<endl;
  cout<<s1<<endl;

    cout<<"________oen per line____________________"<<endl;


    len();
    
  cout<<n1<<endl;
  cout<<n2<<endl;
  cout<<s1<<endl;
    cout<<"________oen per line____________________"<<endl;

  
    len();

  cout<<setw(10)<<endl; 
  cout<<n1<<endl;
  cout<<n2<<endl;
  cout<<s1<<endl;

 cout<<"________one per line____________________"<<endl;

  
    len();

    cout<<setw(10)<<endl;

      cout<<n1<<n2<<s1<<endl;


 cout<<"________one per line____________________"<<endl;

  
    len();

    cout<<setw(10)<<endl;
    

      cout<<n1<<setw(10)<<n2<<s1<<endl;


 cout<<"________one per line____________________"<<endl;

  
    len();
    
      cout<<setw(10)<<n1<<setw(10)<<n2<<setw(10)<<s1<<endl;
 cout<<"________one per line____________________"<<endl;

  
    len();
    cout<<setfill('=');
    
      cout<<setw(10)<<n1<<setw(10)<<n2<<setw(10)<<s1<<endl;
 cout<<"________one per line____________________"<<endl;

  
    len();
    cout<<setfill('=');
    
      cout<<setw(10)<<n1<<setfill('\\')<<setw(10)<<n2<<setw(10)<<setfill('@')<<s1<<endl;

























}