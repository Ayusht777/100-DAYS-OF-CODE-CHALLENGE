// error handling

#include <iostream>
using namespace std;

double cal(int miles,int gallon){
  if(gallon ==0){
    throw 0;
  }
  return static_cast <double> (miles)/gallon;
}


int main(){

    int miles{};
    int gallons{};
    double miles_per_gallon{};

    cout<<"Enter number of miles :";
    cin>>miles;
    cout<<"Enter number of gallons :";
    cin>>gallons;


    try{
        
        miles_per_gallon = cal(miles,gallons);
         cout<<"\nResults : "<<miles_per_gallon<<endl;





        }

    catch(int &catcher_from_try){
        cerr<<"sorry we can not div with 0 "<<endl;

    }




    



}