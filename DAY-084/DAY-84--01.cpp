// error handling

#include <iostream>
using namespace std;




int main(){

  cout<<"noboolalpha - default : (100 == 100) : "<<(100==100)<<endl;
  cout<<"noboolalpha - default : (100 == 200) : "<<(100 ==200)<<endl;

  cout<<boolalpha<<endl;

   cout<<"boolalpha - default : (100 == 100) : "<<(100==100)<<endl;
  cout<<"boolalpha - default : (100 == 200) : "<<(100 ==200)<<endl;
   cout<<"____________________________________________________________"<<endl;
   cout<<"boolalpha - default : (100 == 100) : "<<(100==100)<<endl;
  cout<<"boolalpha - default : (100 == 200) : "<<(100 ==200)<<endl;

   cout<<noboolalpha<<endl;

     cout<<"boolalpha - default : (100 == 100) : "<<(100==100)<<endl;
  cout<<"boolalpha - default : (100 == 200) : "<<(100 ==200)<<endl;


cout.setf(ios::boolalpha);

     cout<<"boolalpha  : (100 == 100) : "<<(100==100)<<endl;
  cout<<"boolalpha  : (100 == 200) : "<<(100 ==200)<<endl;


 cout<<(ios::boolalpha)<<endl;

  cout<<"deafult : (100 == 100) : "<<(100==100)<<endl;
  cout<<"default  : (100 == 200) : "<<(100 ==200)<<endl;









  

    



}