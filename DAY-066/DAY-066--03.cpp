// Day - 66 of 100dayofcode [24/09/2022 Saturday]

#include <iostream>
#include<ctime> // for time
#include<cstdlib> // for random function

using namespace std;
int main(){
   
int min{1};
int max{6};

for(size_t i{};i<5;i++){

  cout <<rand()<<endl;// letas add a range
}
  
cout<<"_______________________"<<endl;

for(size_t i{0};i<5;i++){

  cout <<rand()%min+max<<endl;// not  worked as we wnat


  
}

cout<<"RNAD_MAX : "<<RAND_MAX<<endl;
srand(time(nullptr));
int r{};
cout<<"_______________________"<<endl;

for(size_t i{0};i<5;i++){
  r =rand()%min+max;
  cout <<r<<endl;// not  worked as we wnat



}

    



}