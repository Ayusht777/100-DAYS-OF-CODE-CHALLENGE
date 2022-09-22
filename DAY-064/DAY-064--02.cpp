// Day - 64 of 100dayofcode [22/09/2022 Thrusday]

#include <iostream>

//while loop


using namespace std;
int main(){
  

char s{};
int num1{0},num2{0};

do{
    cout <<"enter number 1:";
    cin>>num1;

    cout <<"enter number 2:";
    cin>>num2;

    cout <<num1 <<" + "<<num2<<" = "<<(num1+num2)<<endl;
    
    cout <<"do want to countinue than type Y for yes and N for no : "<<endl;
    cin >>s;

}while (s!='y' && s != 'Y');
// s =='y' 







  
}