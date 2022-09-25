// Day - 67 of 100dayofcode [25/09/2022 Sunday]

#include <iostream>
#include<iomanip>
#include<string>
// deafult value to functions

using namespace std;

double cal_C(double base_cost ,double tax_rate =0.10 ,double shipping = 1.45){

    return( base_cost += (base_cost * tax_rate) + shipping  );

}

string greet(string name,string perfix = "Mr.",string suffix = " "){

    return("hello "+perfix+name+" "+suffix );

}



int main(){

  double final{0};

  final = cal_C(142);

  cout<<fixed <<setprecision(2);
  cout << "final "<<final<<endl; // only one value passed 

  final = cal_C(142,2.1);
  cout << "final "<<final<<endl; // only two value passed 
  
  
  final = cal_C(142,2.1,55);
  cout << "final "<<final<<endl; // all value passed 
  cout << "____________________"<<endl;
  string n;

  n = greet("ayush");
  cout <<n<<endl;

  n = greet("ayush","Dr.","MD");
  cout <<n<<endl;


  


}