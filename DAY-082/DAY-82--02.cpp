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

void func(shared_ptr <test> p){
    cout<<"use count : "<<p.use_count()<<endl;
}

class account{
    public:
    virtual void withdraw(double num){
        cout<<"In Account :: Withdraw "<<endl;

    }
    virtual ~account(){
        cout<<"Account Destructor "<<endl;
    }

};

class savings :public account{
     public:
    virtual void withdraw(double num){
        cout<<"In Savings :: Withdraw "<<endl;
    }

    virtual ~savings (){
        cout<<"Savings Destructor "<<endl;
    }


};
class checking :public account{
     public:
    virtual void withdraw(double num){
        cout<<"In Checking :: Withdraw "<<endl;
    }

    virtual~checking(){
        cout<<"Checking Destructor "<<endl;
    }

};
class trust :public account{
     public:
    virtual void withdraw(double num){
        cout<<"In Trust :: Withdraw "<<endl;
    }

     virtual ~trust(){
        cout<<"Trust Destructor "<<endl;
    }

};   


int main(){

    cout<<"int version"<<endl;

    shared_ptr<int> p1 {new int {1000}};
    cout<<"use count : "<<p1.use_count()<<endl;

    shared_ptr <int> p2{p1};
      cout<<"use count : "<<p2.use_count()<<endl;

    shared_ptr <int> p3;
    p3 = p1;
      cout<<"use count : "<<p3.use_count()<<endl;  

      
      p1.reset();

     cout<<"use count : "<<p2.use_count()<<endl;
       cout<<"use count : "<<p3.use_count()<<endl; 

    cout<<"________________________________________test___________________________________________"<<endl;

    shared_ptr <test> t1{new test {4000}};
    func(t1);
    cout<<"use count : "<<t1.use_count()<<endl; 

    shared_ptr <test> t2 = make_shared <test> (100);

    func(t2);
     cout<<"use count : "<<t2.use_count()<<endl; 


    {
        shared_ptr <test> p1 = t1;
         cout<<"use count : "<<p1.use_count()<<endl; 

         {
            shared_ptr <test> p2 = p1;
             cout<<"use count : "<<p2.use_count()<<endl;
             p1.reset(); 
         }
         cout<<"use count : "<<p2.use_count()<<endl;

    }


    cout<<"________________________________________Account___________________________________________"<<endl;

    shared_ptr <account> a1 =make_shared <account> ();
    shared_ptr <account> a2 =make_shared <savings> ();
    shared_ptr <account> a3 =make_shared <checking> ();
    shared_ptr <account> a4 =make_shared <trust> ();

    vector<shared_ptr <account> >acc;

    acc.push_back(a1);

    acc.push_back(a2);

    acc.push_back(a3);

    acc.push_back(a4);

    for (const auto &x :acc){
        // cout<< *x <<endl;
        cout<<"use count : "<<x.use_count()<<endl;
    }



} 

    
    








   





   




