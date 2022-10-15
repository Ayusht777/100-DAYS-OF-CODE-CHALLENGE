// Day - 82 of 100dayofcode [15/10/2022 Saturday]

#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class b; //perdeclartion

class a{
    weak_ptr<b> ptr_b;
    public:
    void set_b(shared_ptr <b> &b)
    {
        ptr_b =b;
    }

    a(){
        cout<<"a constructor called"<<endl;

    }
    ~a(){
        cout<<"a destructor called"<<endl;
    }


};

class b{
        weak_ptr<a> ptr_a;
    public:
    void set_a(shared_ptr <a> &a)
    {
        ptr_a =a;
    }

    b(){
        cout<<"b constructor called"<<endl;

    }
    ~b(){
        cout<<"b destructor called"<<endl;
    }



};


int main(){

    shared_ptr <a> a1 = make_shared <a> ();
    shared_ptr <b> b1 = make_shared <b> ();

    a1->set_b(b1);
    b1->set_a(a1);

    




}


    
    








   





   




