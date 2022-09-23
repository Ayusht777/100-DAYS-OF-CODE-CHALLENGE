// Day - 65 of 100dayofcode [23/09/2022 Friday]

#include <iostream>
#include<cstring> // c -style string
#include<cctype> // cstyle string function
//charcheetr function


using namespace std;
int main(){
  
char fname[25];
char lname[25];


// cout << "ENTER YOUR FIRST NAME : ";
// cin >>fname;
// cout << "ENTER YOUR LAST NAME : ";
// cin >>lname;

// cout << "your first name is " <<fname<<" and last name is "<<lname<<endl;
char fullname[50];

// strcpy(fullname,fname); //copy string

// strcat(fullname," "); // append the name

// strcat(fullname,lname);


// cout << "YOUR FULLNAME IS "<<fullname<<endl;


// cout <<"enter full name :";
// cin.get(fullname,50);//old version

// cout <<fullname<<endl;
cout <<"enter full name :";
cin.getline(fullname,50);//old version
for(size_t i{0};i<strlen(fullname);i++){

    if(isalpha(fullname[i])){
        fullname[i] = toupper(fullname[i]);
    }
}


cout <<fullname<<endl;

}