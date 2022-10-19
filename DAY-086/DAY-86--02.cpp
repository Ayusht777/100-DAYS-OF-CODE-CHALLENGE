#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;

///useing anmspsce std will going tot throw erppr
//https://stackoverflow.com/questions/5887931/call-of-overloaded-minint-int-is-ambiguous

template <typename T> // <typenmae or class can be used
T min(T x ,T y){
   return  (x<y) ?  x:y;


}



struct person{
    std::string name;
    int age;

    //opertion overloading

    bool operator < (const person &rhs )const{
        return(this->age < rhs.age);
    }


};

std::ostream &operator << (std::ostream &os,const person &p){
    os<<p.name;
    return os;
}

template <class a ,class b>

void func(a data1, b data2){
    cout<<data1<<" "<<data2<<endl;

}

template <class t>
void swap(t &a,t &b){
    t temp;
    temp =a;
    a = b;
    b= temp;

}


int main(){



    cout <<min<int>(2,5)<<endl;

    cout <<min(2,5)<<endl; //comiler smart 

    cout <<min(2.45,5.45)<<endl;

    cout <<min('a','b')<<endl;

    cout <<min(2*5-2,5/9+9)<<endl;


   person p1 {"ayush",20};
   person p2 {"divyanhsu",19};
   person p3 = min(p1,p2);
   cout<<p3.name<<" is younger"<<endl;



   func<int,int>(10,25);
   func(10,20);
   func(10,20.15);
   func('a',5577);
   func(1455,"testing");
   func(4877,std::string{"ayush"});

   cout<<"________________________________________"<<endl;
   func(p1,p2);

  int x{10},y{15};
  cout<<"x : "<<x<<" y : "<<y<<endl;

  swap(x,y);

    cout<<"x : "<<x<<" y : "<<y<<endl;






}