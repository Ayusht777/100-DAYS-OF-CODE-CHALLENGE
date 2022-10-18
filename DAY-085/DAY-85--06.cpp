#include <iostream>
#include<sstream>
#include<iomanip>
#include<string>
#include<limits>


using namespace std;

int main(){
    int num{};
    double total{};
    string name{};
    string data{"ayush 101 1.48"};

    istringstream s {data};
    
    s>>name>>num>>total;

    cout<<setw(15)<<left<<name<<setw(5)<<num<<setw(15)<<right<<total<<endl;

    cout<<"___________________________________________"<<endl;

    ostringstream os{};
    os<<setw(10)<<left<<name<<setw(5)<<num<<setw(10)<<total<<endl;

    cout<<os.str()<<endl;

    cout<<"_________________________________________________________________"<<endl;

    int value{};

    string inp{};
    bool checker = false;
    do{

        cout<<"Please Enter a  Intger :";
        cin>>inp;
        istringstream v{inp};
        if(v >>value){
            checker = true;
        }

        else{
            cout<<"Sorry That is not A integer "<<endl;

        }

        cin.ignore(numeric_limits <streamsize>::max() ,'\n');
        }while(!checker);

        cout<<value<<endl;
    

    

}