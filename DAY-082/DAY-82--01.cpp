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



int main(){

    test *t1 = new test {1000};
   delete t1;

   unique_ptr <test> t2 {new test {5000}};
   unique_ptr <test> t3 = make_unique <test> (5001);

   vector <unique_ptr<test>> t4;

   t4.push_back(make_unique <test> (50444));
   t4.at(0);

   





   


}



