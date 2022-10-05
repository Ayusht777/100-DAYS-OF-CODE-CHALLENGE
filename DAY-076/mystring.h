#pragma

#include<cstring>
#include <iostream>
using namespace std;
class Mystring{
    private:
    char *str; //oldy c-style string
    public:
    Mystring();
    Mystring(const char *s);///overloading
    Mystring(const Mystring &source);//copy constructor
    ~Mystring();//destrcutor

    //functions
    void display() const;
    int get_l() const;
    const char *get_s()const;

};

Mystring::Mystring()
:str{nullptr}{
    str =new char[1];
    *str='\0';

}

Mystring::Mystring(const char *s)
:str{nullptr}{
    if(s == nullptr){
        str =new char[1];
        *str ='\0';
    }
    else
    {
        str =new char[strlen(s) +1];
        strcpy(str,s);
    }
}

Mystring::Mystring(const Mystring &source)
:str{nullptr}{
    str =new char[strlen(source.str) +1];
        strcpy(str,source.str);
}

Mystring::~Mystring(){
    delete [] str;
}

void Mystring::display() const{
    cout<<str<<" : "<<get_l()<<endl;

}
int Mystring::get_l() const {return strlen(str);}


const char *Mystring::get_s() const{
    return str;
}



