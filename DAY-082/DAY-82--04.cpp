// Day - 82 of 100dayofcode [15/10/2022 Saturday]

#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class test{
    private:
    int data;

    public:
    test():data{0}{
        cout<<"test constructor ("<< data <<")"<<endl;
    };
    test(int d):data{d}{
        cout<<"test constructor ("<< data <<")"<<endl;
    };

    ~test(){
        cout<<"test destructor ("<< data <<")"<<endl;

    };

};

void del(test *p){
    cout<<"\n using my coustom deleter"<<endl;
    delete p;

}


int main(){

    {

    shared_ptr <test> t {new test {444},del};


    }

    cout<<"<<<<<<<<<<<<lambda style>>>>>>>>>>>>>>>>>"<<endl;

    {
        shared_ptr <test> t (new test{500},[](test *ptr) {

             cout<<"\n using my coustom deleter"<<endl;
                 delete ptr;




        });
    }



 
    




}


    
    








   





   




