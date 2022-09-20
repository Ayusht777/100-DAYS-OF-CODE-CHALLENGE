// Day - 62 of 100dayofcode [20/09/2022 Tuesday]

#include <iostream>

//


using namespace std;
int main(){
  
//comparsion 

   
   bool x{false};
   bool y{false};

   int a{0},b{0};

   cout << "ENTER 2 INT: "<<endl;
   cin>>a>>b;
   x = (a==b);
   y = (a!=b);
  // 1 = true 0 = false
   cout <<"equal : " << x<<endl;
   cout <<"not equal : " <<y <<endl;
   
   cout << "equal : "<< x <<boolalpha <<endl; // output in form of 0/1
   cout << "not equal : "<< y <<boolalpha <<endl; // output != flase
   cout << "equal : "<< x <<noboolalpha <<endl; // output in true 
   cout << "not equal : "<< y <<noboolalpha<<endl;




  
}