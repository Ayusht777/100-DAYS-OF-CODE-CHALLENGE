#include <iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int main(){
    ifstream file;
    file.open("poem.txt");
    if(!file){
        cerr<<"File not opened"<<endl;

    }

    string text{};

    while (getline(file,text))
    {
        cout<<text<<endl;
    }

    file.close();
    

}