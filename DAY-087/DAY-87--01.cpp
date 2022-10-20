#include<iostream>
#include<string>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;

template<typename t>

class item{
    private:
    string name;
    t value;
    public:

    item(string n,t v):name{n},value{v}{
        
    }

    string get_name() const {
        return(name);
    }
    

    t get_value() const {
        return (value);
    }
    
};

template <typename t1,class t2>
 struct f1{
    t1 n1;
    t2 n2;
    

 };


 int main(){


    item <int> i1 {"ayush",100};
    cout<<i1.get_name()<<" "<<i1.get_value()<<endl;
    item <double> i2 {"ayush",10.0};
    cout<<i2.get_name()<<" "<<i2.get_value()<<endl;
    item <item <string>> i3 {"ayush",{"language","c++"}};
    cout<<i3.get_name()<<" "<<i3.get_value().get_value()<<" "<<i3.get_value().get_name()<<endl;

    cout<<"___________________________________________________________"<<endl;

    std::vector <item<int>> v1 {};

    v1.push_back({"ayush",5656});
    v1.push_back({"divyanshu",498});
    v1.push_back({"jay",54447});

    for(const auto &item:v1){
        cout<<item.get_name()<<" "<<item.get_value()<<endl;

    }

    
    cout<<"___________________________________________________________"<<endl;

    f1 <int,string> p1{457,"ayush"};
    f1 <int,double> p2{4578,547.78};

    cout<<p1.n1<<" "<<p1.n2<<endl;
    cout<<p2.n1<<" "<<p2.n2<<endl;









    

 }