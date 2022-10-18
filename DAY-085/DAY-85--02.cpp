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

    char x {};

    while (file.get(x))
    {
        cout<<x;
    }

    cout<<endl;
    file.close();
    

}