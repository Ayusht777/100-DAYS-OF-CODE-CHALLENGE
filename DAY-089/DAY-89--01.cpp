#include <iostream>
#include<vector>
#include<list>
#include<algorithm>
#include<cctype>

using namespace std;


class person{
    private:
    string name;
    int age;

    public:
    person()=default;
    person(string s,int a):name{s},age{a}{

    }

    bool operator <(const person &rhs )const{
        return this->age < rhs.age;   }

    bool operator == (const person &rhs) const{
        return (this->name ==rhs.name &&this->age==rhs.age);
    }


};


void test1(){
    cout<<"\n=========================="<<endl;
    vector <int> v {0,4,78,7,3,1,4};

    auto loc =  find(v.begin(),v.end(),1);
    
  //itrwtor 
  if(loc!=v.end()){
    cout<<"it found the : "<<*loc<<endl;
  }
  else{
    cout<<"Not found it"<<endl;
  }

  list <person> p {{"ayush",21},{"divyanshu",20}};

  auto l = find(p.begin(),p.end(),person{"ayush",21});

 if(l!=p.end()){
    cout<<"it found the "<<endl;
  }
  else{
    cout<<"Not found it"<<endl;
  }



}


void test2(){

    cout<<"\n=========================="<<endl;
    vector <int> v {0,4,78,7,3,1,4,1,1,2};

    auto times =  count(v.begin(),v.end(),1);
 // by deafault it is i a int

 cout<<"The number of times : "<<times<<endl;

   


}


void test3(){
     cout<<"\n=========================="<<endl;
    vector <int> l {1,4,7,9,2,9,2,4,47,7,8};
    int num = count_if(l.begin(),l.end(),[] (int n){return (n%2==0);}); //lets write lambda here
    
    cout<<"The number of even number in this list : "<<num<<endl;

    num = count_if(l.begin(),l.end(),[] (int n){return (n%2!=0);});
    cout<<"The number of odd number in this list : "<<num<<endl;
    
    num = count_if(l.begin(),l.end(),[] (int n){return (n>=5);});
    cout<<"The number greater than 5 in list : "<<num<<endl;

   


}

void test4(){
     cout<<"\n=========================="<<endl;
     string s {"ayush is good to meet with you"};
     cout<<"the string before replace :\n"+s<<endl;
     replace(s.begin(),s.end(),'t','z');
     cout<<"the string after replace :\n"+s<<endl;


     vector <int> l {1,2,4,65,7,8,94,63,460};
     cout<<"_____________________________________"<<endl;
     cout<<"[ ";
     for(auto i :l){
        cout<<i<<" ";
     }
     cout<<"]"<<endl;
     cout<<"_____________________________________"<<endl;
     replace(l.begin(),l.end(),7,99);

     cout<<"[ ";
     for(auto i :l){
        cout<<i<<" ";
     }
     cout<<"]"<<endl;




}


void test5(){
  cout<<"\n=========================="<<endl;
    vector <int> l {1,2,3,4,11,12,19};
    if(all_of(l.begin(),l.end(),[] (int n){return (n>10);})){
        cout<<"ALL ELEMNET ARE GREATOR THAN 10"<<endl;
    }
    else{
        cout<<"ALL ELEMENT ARE not THAN 10"<<endl;
        
    }
    if(all_of(l.begin(),l.end(),[] (int n){return (n<20);})){
        cout<<"ALL ELEMNET ARE GREATOR THAN 20"<<endl;
    }
    else{
        cout<<"ALL ELEMENT ARE not  THAN 20"<<endl;

    }

}



void test6(){
        cout<<"\n=========================="<<endl;
     string s {"ayush is good to meet with you"};
     cout<<"before tranformation : "+s<<endl;
     transform(s.begin(),s.end(),s.begin(),::toupper);

       cout<<"After tranformation : "+s<<endl;
    
}
















int main(){
    test1();
    test2();

    test3();

    test4();

    test5();

    test6();
}

