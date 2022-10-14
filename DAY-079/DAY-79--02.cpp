// Day - 79 of 100dayofcode [10/10/2022 Monday]


#include <iostream>
#include <string>

using namespace std;

class computer {
 public:
 computer(){
   cout<<"this is a computer constructor called"<<endl;
   }

   
   ~computer(){
     cout<<"computer destructor called"<<endl;
   }
 

};
class os {
 public:
 os(){
   cout<<"this is a os constructor called"<<endl;
   }

   
   ~os(){
     cout<<"os destructor called"<<endl;
   }
 

};

class app : public computer,public os {
 public:
 app(){
   cout<<"this is a app constructor called"<<endl;
   }

   
   ~app(){
     cout<<"app destructor called"<<endl;
   }
 

};




int main() {
  
  app a;

  
}