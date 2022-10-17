#include<iostream>
#include<iomanip>
#include<string.h>
#include<fstream>


using namespace  std;

int main(){
    ifstream in_file;

    string r;
    int n;
    double d;
  in_file.open("test.txt");
    if(!in_file){
        cerr<<"File is not open "<<endl;
        exit(1);

    }
    
    in_file>>r;
    in_file>>n;
    in_file>>d;

    cout<<r<<n<<d<<endl;

    cout<<r<<endl;
    cout<<n<<endl;
    cout<<d<<endl;

    in_file.close();





}