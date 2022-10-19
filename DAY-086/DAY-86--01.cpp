#include<iostream>
#include<string>
#include<vector>


using namespace std;

class person{

    

    friend ostream &operator<<(ostream &os,const person &rhs);
   private:
  string name;
  int age;
   public:

   person(string name,int age):name{name},age{age}{

   };

   person(const person &p):name{p.name},age{p.age}{

   }

   ~person() =default;

   string get_name() const {return name;};

   void set_name(string name){this->name = name;};
   int get_age() const {return age;};

   void set_age(int age){this->age =age;};











};


ostream &operator<<(ostream &os ,const person &rhs){
    os<<"[Person: "<<rhs.name<<" : "<<rhs.age<<"]";
    return os;
}


void test1(){
    cout<<"-----TEST - 1------------------- "<<endl;
    [] () {cout<<"Hi"<<endl;} ();
    [] (int x) {cout<<x<<endl;} (15);
    [] (int x,int y) {cout<<x<<" + "<<y<<" = "<<x+y<<endl;}(5,10);



}

void test2(){
    cout<<"-----TEST - 2------------------- "<<endl;
    auto t1 = [] () {cout<<"Hi"<<endl;};
    t1();

    auto t2 = [] (int x,int y) {cout<<x+y<<endl;};
    t2(5,10);
    int num1 {100};
    int num2 {200};
    t2(num1,num2);
 
    auto t3 = [] (int &x ,int y) {cout<<"x : "<<x<<" y : "<<y<<endl;
    x =1000;
    y =2000;
    };

    t3(num1,num2);
    cout<<"Num1 : "<<num1<<" Num2 : "<<num2<<endl;
}


void test3(){
     cout<<"-----TEST - 3------------------- "<<endl;
     person stooge{"ayush",18};
     cout<<stooge<<endl;
     auto t1 = [](person p){
        cout<<p<<endl;
     };
     t1(stooge);

     auto t2 = [] (const person &p){
        cout<<p<<endl;

     };
     t2(stooge);



     auto t3 = [] (person p) {p.set_name("ravi"),p.set_age(50),cout<<p<<endl;};
     t3(stooge);

     cout<<stooge<<endl;




}











using namespace std;
main(){
     test1();

     test2();

     test3();





}  

