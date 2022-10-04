// Day - 75 of 100dayofcode [04/10/2022 Tuesday]

#include <iostream>
#include<string>
#include<vector>

using namespace std;

class Move{
  private:
  int *data;

  public:
  void set_data(int d ){*data =d;};
  int get_data(){return *data;};

  // construcor
  Move(int d);
  // deep copy construcor
  Move(Move &&source);

  //destructor

  ~Move();


};

Move::Move(int d){
  data= new int;
  *data = d;

}

Move::Move(Move &&source)
: Move(*source.data)
{
   source.data =nullptr;
  cout<<"Move constructor called"<<endl;

}

Move::~Move(){
  if (data != nullptr){

  cout <<"Destructor freeing data for "<<*data<<endl;

  }
  else
  {
    cout <<"Destructor freeing data for Nullptr"<<endl;
  }
  delete data;
}

void display(Move d)
{   
  cout<<d.get_data()<<endl;

}



int main(){


  vector <Move> v;

  v.push_back(Move{10});

  v.push_back(Move{20});

  v.push_back(Move{30});

  v.push_back(Move{40});







}