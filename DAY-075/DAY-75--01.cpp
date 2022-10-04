// Day - 75 of 100dayofcode [04/10/2022 Tuesday]

#include <iostream>
#include<string>

using namespace std;

class Deep{
  private:
  int *data;

  public:
  void set_data(int d ){*data =d;};
  int get_data(){return *data;};

  // construcor
  Deep(int d);
  // deep copy construcor
  Deep(const Deep &source);

  //destructor

  ~Deep();


};

Deep::Deep(int d){
  data= new int;
  *data = d;

}

Deep::Deep(const Deep &source)
: Deep(*source.data){
  cout<<"copy constructor called"<<endl;

}

Deep::~Deep(){

  cout <<"Destructor called"<<endl;
}

void display(Deep d)
{   
  cout<<d.get_data()<<endl;

}



int main(){

 Deep obj1{100};
 display(obj1);

 Deep obj2{obj1};
  obj2.set_data(5000);
 display(obj2);


 






}