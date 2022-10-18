#include <iostream>
#include<fstream>
#include<iomanip>


using namespace std;

int main(){
    ofstream file;
    file.open("new.txt");
    if(!file){
        cerr<<"File not opened"<<endl;

    }

    string text{};

    cout<<"Enter some Text : ";
    getline(cin,text);

    file<<text;
    cout<<"\n"<<text<<endl;
    

    file.close();
    

}