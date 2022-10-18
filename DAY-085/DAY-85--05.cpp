#include <iostream>
#include<fstream>
#include<iomanip>


using namespace std;

int main(){
    ifstream filein;
    ofstream fileop;

    filein.open("new.txt");
    if(!filein){
        cerr<<"File not opened"<<endl;

    }
    fileop.open("copy.txt");
    if(!fileop){
        cerr<<"File not opened"<<endl;

    }

    string text{};
 
    while(getline(filein,text)){
        fileop<<text<<endl;
    }
    cout<<"Filed Copy"<<endl;
    filein.close();
    fileop.close();


    

}