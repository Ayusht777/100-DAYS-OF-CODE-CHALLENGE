// Day - 80 of 100dayofcode [11/10/2022 Tuesday]

#include <iostream>
#include <string>

using namespace std;

class ab{
 private:
int x,y;// it is a private variable

public:
void set(int num,int num1){
  x=num;
  y=num1;

}
void get(){
cout<<"A = "<<x<<endl;
cout<< "B = "<<y<<endl;
  
}

};




int main() {
  ab obj;
  obj.set(55,45);
  
  obj.get();
  
  
  

}