// Day - 560 of 100dayofcode [14/09/2022 Wenesday]

#include <iostream>
#include <vector>
//vector


using namespace std;
int main(){
  
  // vetor of int type
  vector <int> vee ; // empyt vector
  vector <int> vecti {0,2,56,6};
  vector <char> vetc {'a','d','q'};
  vector <char> vetxc (10); // size () and all value is 0
  
  cout << vecti[0] <<endl;
  cout << vecti[1] <<endl;
  cout << vecti[2] <<endl;
  cout << vecti[3] <<endl;
   
  cout << vetc[1] <<endl;

  cout <<"!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
  cout << vetxc[0] <<endl;

  /////////////////////////////////////////////
  vector <int> veall(5,25); // 5 vetor of 25 value each

  cout << veall[0] <<endl;
  cout << veall[1] <<endl;
  cout << veall[2] <<endl;

  // another way to acces element

  cout << veall.at(0) <<endl;
  cout << veall.at(0) <<endl;
  cout << veall.at(0) <<endl;
 cout <<"!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
  cout << veall.size() <<endl;

   cout <<"!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;

   vector <int> x(5);
   x.at(0) = 55;
   x.at(1) = 99;

   cout << x.at(0) << "  "<< x.at(1) << endl;

   cout<<"###############################"<<endl;

   // from user
   int u{0}; //zero value
  // //  
  //  cout << "enter a number : ";
  //  cin >> u;
  //  x.push_back(u);
  //  cout <<x[0] << endl;
  //  cout <<x[1] << endl;
  //  cout <<x[2] << endl;
  // 2-d vector
   
   vector <vector <int>> xr {{4,5,6},{5,7,8},{1,9,8}};

   cout << xr[0][1] <<endl;
   cout << xr[1][1] <<endl;
   cout << xr[2][1] <<endl;

   cout<<"@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
   cout << xr.at(0).at(1) <<endl;
   cout << xr.at(1).at(1) <<endl;
   cout << xr.at(2).at(1) <<endl;


   



  










  

  





}