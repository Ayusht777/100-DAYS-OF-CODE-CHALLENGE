// Day - 61 of 100dayofcode [15/09/2022 Thrusday]

#include <iostream>



///  increment / dercemnet opertor
using namespace std;
int main(){
  
  int c {1};

  cout << c <<endl;
  c  = c +1;
  cout << c << endl;
  //or 
  c++;
//or
  cout << c << endl;
  
  ++c;
 //or
  cout << c <<endl;






float a {10.1};

cout << a <<endl;
  a  = a +1;
  cout << a << endl;
  //or 
  a++;
//or
  cout << a << endl;
  
  ++a;
 //or
  cout << a <<endl;


double q {7.485};
q++;
cout<<q<<endl;

char w{'a'};
w++;
cout<<w<<endl;

// real exapmle

// perfeix version
int e {10};
int r {0};

cout <<e << "," <<r <<endl;

r = ++e + 5;
cout <<e << "," <<r <<endl;

// postfeix version
e = 10;
r = 0;

cout <<e << "," <<r <<endl;

r = e++ + 5;
cout <<e << "," <<r <<endl;


cout <<"===================================="<<endl;


}