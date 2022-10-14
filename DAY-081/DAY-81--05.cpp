// Day - 81 of 100dayofcode [14/10/2022 Friday]

#include <iostream>
#include <string>

using namespace std;


class base{
    public:
    virtual void say_hello() const {
        cout<<"Hello - I'm a base class object"<<endl;

    }

    virtual ~base(){};


};

class derived :public base{
    public:
    virtual void say_hello () const override  {

        cout<<"Hello - I'm a dervied class object"<<endl;

    }

    virtual ~derived(){};


};


void greet(const base &a){
    cout<<"Greeting : ";
    a.say_hello();
}


int main(){
    base b1;
    b1.say_hello();

    derived b2;
    b2.say_hello();
   

    base *ptr = new derived();

    ptr->say_hello();
    


}



