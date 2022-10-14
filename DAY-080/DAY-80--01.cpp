// Day - 80 of 100dayofcode [11/10/2022 Tuesday]

#include <iostream>
#include <string>

using namespace std;

class en{
 private:
int x;// it is a private variable

public:
void set(int num){
  x=num;
}
int get(){
  return x;
}

};




int main() {
  en obj;
  obj.set(55);
  int q= obj.get();
  cout<<q<<endl;
  
  

  
}