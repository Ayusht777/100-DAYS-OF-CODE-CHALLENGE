// Day - 5️9 of 100dayofcode [13/09/2022 Tuesday]

#include <iostream>
#include <climits>
//sizeof


using namespace std;
int main(){
  
  cout << "sizeof various data type" << endl;

  cout << "size of int : " << sizeof(int) <<" bytes" <<endl;
  cout << "size of float : " << sizeof(float) <<" bytes" <<endl;
  cout << "size of double : " << sizeof(double) <<" bytes" <<endl;
  cout << "size of bool : " << sizeof(bool) <<" bytes" <<endl;
  cout << "size of char : " << sizeof(char) <<" bytes" <<endl;
  cout << "size of wchar : " << sizeof(wchar_t) <<" bytes" <<endl;
  cout << "size of long : " << sizeof(long) <<" bytes" <<endl;
  cout << "size of long long : " << sizeof(long long ) <<" bytes" <<endl;
  cout << "size of long double : " << sizeof(long double ) <<" bytes" <<endl;
  cout << "size of signed int : " << sizeof(signed int  ) <<" bytes" <<endl;
  cout << "size of unsigned int : " << sizeof(unsigned int ) <<" bytes" <<endl;
  cout << "size of short : " << sizeof(short) <<" bytes" <<endl;

  cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
  cout << "Max value of int  : " <<INT_MAX <<endl;
  cout << "Min value of int  : " <<INT_MIN <<endl;
  cout << "Max value of unsigned int  : " <<UINT_MAX <<endl;
  cout << "Max value of char : " <<CHAR_MAX <<endl;
  cout << "Min value of char  : " <<CHAR_MIN <<endl;
  cout << "Max value of Long  : " <<LONG_MAX <<endl;
  cout << "Min value of Long : " <<LONG_MIN <<endl;
  cout << "Max value of Long long : " <<LLONG_MAX <<endl;
  cout << "Min value of Long long : " <<LLONG_MIN <<endl;
  cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
  
  int a{50};
  double b {5.4621};

  cout <<sizeof a <<endl; // you can use with or wtithout ()
  cout << sizeof (b) <<endl;

  

 





   


}