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
       return 1;

    }
    while(!in_file.eof()){
    
    in_file>>r>>n>>d;

    cout<<setw(10)<<r<<setw(10)<<n<<setw(10)<<d<<endl;
    }

    in_file.close();





}