// Day - 74 of 100dayofcode [03/10/2022 Monday]

#include <iostream>
#include<string>

using namespace std;

class shallow{
    private:
    int *data;
    public:
    void set_data(int d){*data = d;};
    int get_data(){return *data;};

    // construtor
    shallow(int d);

    // copy construcor
    shallow(const shallow &source);

    //destrucor

    ~shallow();


};

shallow::shallow(int d){
    data = new int;
    *data =d;
}

shallow::shallow(const shallow &source)
  :data(source.data){
    cout <<"copy constructor - shallow copy"<<endl;
  }

shallow::~shallow(){
    delete data;
    cout<<"Destructor is called"<<endl;
}

void display(shallow obj){
    cout<<obj.get_data()<<endl;

}

int main(){

    shallow obj1{1000};
    display(obj1);

    shallow obj2{obj1};
    obj2.set_data(5550);
    display(obj2);



   






}