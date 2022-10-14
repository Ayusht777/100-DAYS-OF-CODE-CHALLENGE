// Day - 81 of 100dayofcode [14/10/2022 Friday]

#include <iostream>
#include <string>

using namespace std;


class base{
    public:
    void say_hello() const {
        cout<<"Hello - I'm a base class object"<<endl;

    }


};

class derived :public base{
    public:
    void say_hello() const {

        cout<<"Hello - I'm a dervied class object"<<endl;

    }


};


void greet(const base &a){
    cout<<"Greeting : ";
    a.say_hello();
}


int main(){
    base b1;
    b1.say_hello();

    greet(b1);
    derived b2;
    b2.say_hello();
    greet(b2);

    base *ptr = new derived();

    ptr->say_hello();
    


}



