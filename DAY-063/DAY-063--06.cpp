// Day - 63 of 100dayofcode [21/09/2022 Wednesday]

#include <iostream>
#include<vector>
//looping


using namespace std;
int main(){
//for loop


  for (int i{1} ; i<=10 ;++i){

    cout << i << endl;
  }

  cout <<"========================"<<endl;
  for (int i{1} ; i<=10 ;i++){

    cout << i << endl;
  }

  cout <<"========================"<<endl;
  for (int i{1} ; i<=10 ;i+=5){

    cout << i << endl;
  }

  cout <<"========================"<<endl;
  
  for (int i{10} ; i>0 ;i--){

    cout << i << endl;
  }

  cout <<"========================"<<endl;
  
  for (int i{1} ; i<=10 ;++i){
    if (i%2==0){cout << i << endl;}

  
    
  }

  cout <<"========================"<<endl;



  for (int i{0},j{2};i<10 ;i++,j++ ){

    cout << i <<" + " <<j<<" = "<<(i+j)<<endl;
  }

 cout <<"========================"<<endl;
  

  vector <int> x {1,7,3,4,5};

  for (int i{0} ;i<x.size();i++){

    cout <<x.at(i)<<endl;
  }



}

