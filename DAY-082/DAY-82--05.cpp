// error handling

#include <iostream>
using namespace std;



int main(){

    int miles{};
    int gallons{};
    double miles_per_gallon{};

    cout<<"Enter number of miles :";
    cin>>miles;
    cout<<"Enter number of gallons :";
    cin>>gallons;

  if(gallons !=0){
    miles_per_gallon = static_cast <double> (miles)/gallons;

    cout<<"\nResults : "<<miles_per_gallon<<endl;

  }
  else{
    cerr<<"sorry we can not div with 0 "<<endl;
  }
cout<<"+++++++++Error handling+++++++++++++++++"<<endl;
    cout<<"Enter number of miles :";
    cin>>miles;
    cout<<"Enter number of gallons :";
    cin>>gallons;

    try{
        if(gallons ==0){
            throw 0; // 0 or any number
        }

        miles_per_gallon = static_cast <double> (miles)/gallons;
         cout<<"\nResults : "<<miles_per_gallon<<endl;





        }

    catch(int &catcher_from_try){
        cerr<<"sorry we can not div with 0 "<<endl;

    }




    



}