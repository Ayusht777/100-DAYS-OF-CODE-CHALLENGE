// Day - 61 of 100dayofcode [15/09/2022 Thrusday]

#include <iostream>
#include <vector>
//vector section challange


using namespace std;
int main(){
  //Q1

  vector <int> vector1 {};
  vector <int> vector2 {};
  int v{0};
  cout <<"enter add element 1 :";
  cin >>v;
  vector1.push_back(v);
  cout <<"enter add element 2 :";
  cin >>v;
  vector1.push_back(v);

  cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;

  cout << vector1.at(0) <<" "<<vector1.at(1)<<endl;
  cout <<"\n" << vector1.size() <<endl;
  cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
  cout <<"enter add element 1 :";
  cin >>v;
  vector2.push_back(v);
  cout <<"enter add element 2 :";
  cin >>v;
  vector2.push_back(v);

  cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;

  cout << vector2.at(0) <<" "<<vector2.at(1)<<endl;
  cout <<"\n" << vector2.size() <<endl;

  //Q2

  vector <vector <int>> vector_2d {0} ;

  vector_2d.push_back(vector1);
  vector_2d.push_back(vector2);

  cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;

  cout << vector_2d.at(0).at(0) << " "<<vector_2d.at(0).at(1)  <<" "<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1) <<endl;
  
  vector1.at(0) = 1000;

  cout << vector_2d.at(0).at(0) << " "<<vector_2d.at(0).at(1)  <<" "<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1) <<endl;


  
  
}