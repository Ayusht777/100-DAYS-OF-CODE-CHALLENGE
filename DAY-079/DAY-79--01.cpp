// Day - 79 of 100dayofcode [10/10/2022 Monday]

#include <iostream>
#include <string>

using namespace std;

class A{
 protected:
 int x;
public:
  void set_x(){
    cout<<"Enter Value of X = ";
    cin>>x;
    
  }
void display_x(){
   cout<<"The value of X = "<<x<<endl;
  
}





};

class B : public A{

 protected:
 int y,p;

 public:
void set_y(){
  set_x();
  cout<<"Enter Value of Y = ";
  cin>>y;
    



  
}

  void display_y(){
    display_x();
    cout<<"\nThe value of Y = "<<y<<endl;
    
  }

void product (){
  p = x*y;
  cout<<"\nThe product of "<<x<<" * "<<y<<" = "<<x*y<<endl;
}


};


int main() {

  B obj2;
  obj2.set_y();
  obj2.display_y();
  obj2.product();
  
}
