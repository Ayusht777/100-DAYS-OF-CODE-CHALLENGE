// Day - 5️9 of 100dayofcode [13/09/2022 Tuesday]

#include <iostream>

// Ayush Carpet cleaning service
/// charge per 
// for small $25
// for large $35
// slaes tax 6% anumm
//esimtate are vaild for 30 days



using namespace std;
int main(){

  cout << "Hello,Welcome To Ayush Carpet Service" << endl;
  cout << "\nEnter Number of Small Rooms : ";
  int number_srooms {0};
  cin >> number_srooms;
  cout << "\nEnter Number of Large Rooms : ";
  int number_lrooms {0};
  cin >> number_lrooms;
  cout << "\nPrice for Per Small Room is $25 each"<<endl;
  cout << "\nPrice for Per Large Room is $35 each"<<endl;
  cout <<"\nCost : "<<(number_srooms*25) + (number_lrooms*35)  <<" $" <<endl;
  cout << "\ntax : "<<((number_srooms*25) + (number_lrooms*35) )*0.06 << " $" <<endl; 
  cout << "\n=================================================";
  cout <<"\nTotal Estimate : "<<(number_srooms*25) + (number_lrooms*35) + ((number_srooms*25) + (number_lrooms*35) )*0.06 << " $" <<endl;
  

  
}