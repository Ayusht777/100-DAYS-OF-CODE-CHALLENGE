// Day - 63 of 100dayofcode [21/09/2022 Wednesday]

#include <iostream>

//conditonal opertor


using namespace std;
int main(){

int num{0};

cout << "ENTER A INTGER : ";
cin >>num;

if (num%2==0){

    cout << "THE NUMBER IS EVEN"<<endl;
}

else
  cout << "odd" <<endl;

cout << "the condional version "<<((num%2==0) ? "even" : "odd");


int num1{0},num2{0};


cout << "enter 2 numbers :" <<endl;

cin >> num1>>num2;

if ( num1!=num2){

    cout<<"the largest num "<<((num1>num2) ? num1:num2) <<endl;

    cout<<"the smallest num "<<((num1<num2) ? num1:num2) <<endl;
}
else
cout <<"the number is same"<<endl;


}