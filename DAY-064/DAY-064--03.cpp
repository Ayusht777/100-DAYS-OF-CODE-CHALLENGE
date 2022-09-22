// Day - 64 of 100dayofcode [22/09/2022 Thrusday]

#include <iostream>
#include<vector>
//nested looping


using namespace std;
int main(){
  
for(int i{1};i<5;i++){
    for(int j{1};j<3;j++){
        cout<<i <<" , "<<j<<endl;
    }
}

cout<<"--------------------------------------"<<endl;



  
for(int i{1};i<11;i++){
    for(int j{1};j<11;j++){
        cout<<i <<" * "<<j <<" = "<<(i*j) <<endl;
    }
    
cout<<"--------------------------------------"<<endl;

}


vector <int> d{};
int size{};
cout<<"enter size of vector :";
cin >>size;

for (int i{0};i<size;i++){
    int unum{0};
    cout<<"ENTER A NUMBER AT "<<i+1<<" : ";
    cin >>unum;
    d.push_back(unum);
    cout<<endl;


}
cout<<"--------------------------------------"<<endl;


for (auto x:d){

     
   
    for (int i{0};i<x;i++){
         
        cout <<">";
    }
      cout<<endl;

   
    
}












  
}