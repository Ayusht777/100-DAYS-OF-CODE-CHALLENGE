#include<iostream>
#include<string>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;

template <typename t,int n>

class arr{

    int size{n};
    t values [n];
   
 friend std::ostream &operator<<(std::ostream &os, const arr<t,n> &ar) {
        os << "[ ";
        for (const auto &val: ar.values)
            os << val << " ";
        os << "]" << std::endl;
        return os;
    }


    public:
    arr()=default;
    arr(t val){
        for(auto &i :values){
            i =val;

        }
    }

    void fill(t val){
        for(auto &x :values){
            x=val;
        }
    }
    int get_size() const {
        return size;

    }

    t &operator[] (int index){
        return values[index];
    }

   
};



 int main(){

    arr <int,2> a1;

    cout<<"The size of a1 : "<<a1.get_size()<<endl;
    cout<<a1<<endl; 


    arr <int,5> a2;
    a2.fill(0);

    cout<<"The size of a2 : "<<a2.get_size()<<endl;
    cout<<a2<<endl; 

  a2[0] =455;
  a2[4] =6544;

     cout<<"The size of a2 : "<<a2.get_size()<<endl;
    cout<<a2<<endl; 


    arr <string,5> s1 (string {"ayush"});

    cout<<"The size of s1 : "<<s1.get_size()<<endl;
    cout<<s1<<endl; 

    s1.fill("x");

      cout<<"The size of s1 : "<<s1.get_size()<<endl;
    cout<<s1<<endl; 




 }