// Day - 5️9 of 100dayofcode [13/09/2022 Tuesday]

#include <iostream>

// Ayush Carpet cleaning service
/// charge per room $30
// slaes tax 6% anumm
//esimtate are vaild for 30 days



using namespace std;
int main(){

  cout << "Hello,Welcome To Ayush Carpet Service" << endl;
  cout << "\nEnter Number of Rooms : ";
  int number_rooms {0};
  cin >> number_rooms;
  cout << "\nPrice for Per Room is $30 each"<<endl;
  cout <<"\nCost : "<<number_rooms*30 <<" $" <<endl;
  cout << "\ntax : "<< number_rooms * 30 * 0.06<< " $" <<endl; 
  cout << "\n=================================================";
  cout <<"\nTotal Estimate : "<< (number_rooms*30) +  number_rooms * 30 * 0.06<< " $" <<endl;
  

  
}