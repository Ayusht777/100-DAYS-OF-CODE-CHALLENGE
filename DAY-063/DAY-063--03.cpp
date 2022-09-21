// Day - 63 of 100dayofcode [21/09/2022 Wednesday]

#include <iostream>

//contorl statemnet


using namespace std;
int main(){

int num{0};


 cout << "ENTER YOUR SCORE : ";
 cin >> num;
if (num <=100 && num >0){
    if (num >=90){

    cout << "A GRADE" <<endl;
 }
 else if (num<90 && num >=80){

    cout << "B GRADE" <<endl;
 }
 else if (num<80 && num >=70){

    cout << "C GRADE" <<endl;
 }
 else if (num<70 && num >=60){

    cout << "D GRADE" <<endl;
 }
 else if (num<60 && num >=50){

    cout << "D GRADE" <<endl;
 }
 else if (num<=50){

    cout << "F GRADE" <<endl;
 }
}


 else{
    cout <<"ENTER A CORRECT NUMBER" <<endl;
 }





  
}