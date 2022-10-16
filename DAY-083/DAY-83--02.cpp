// error handling

#include <iostream>
using namespace std;
class DivideByZeroException{

};

class NegavtiveValueExepection{

};

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
      if (gallons ==0){
        throw DivideByZeroException();
      }
      if (gallons<0 || miles <0){
        throw NegavtiveValueExepection();
      }
        
        miles_per_gallon = cal(miles,gallons);
         cout<<"\nResults : "<<miles_per_gallon<<endl;






        }

    catch(const DivideByZeroException &z){
        cerr<<"sorry we can not div with 0 "<<endl;

    }

    catch (const NegavtiveValueExepection &n){
      cerr<<"one of your number is negative "<<endl;
    }




    



}