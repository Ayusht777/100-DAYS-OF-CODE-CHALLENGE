#include <iostream>
#include<vector> //it is diffrent than c array or raw array
#include<algorithm>

using namespace std;



class person{
    friend ostream &operator <<(ostream &os,const person &p);
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

ostream &operator <<(ostream &os,const person &p){
  os<<p.name<<" : "<<p.age;
  return os;
}

template <class t>

void display(const vector<t> &v){
  cout<<"[";
  for(const auto &x:v){
    cout<<x<<' ';

  }
  cout<<"]"<<endl;


}

void test1(){
    cout<<"\n=========================="<<endl;

   vector <int> v1 {1,2,4,5,6};
   display(v1);
   v1 = {4,8,9,97,8};
   display(v1);

   vector <int> v2 (10,100);
   display(v2);    


    



}


void test2(){

    cout<<"\n=========================="<<endl;
    
   vector <int> v1 {1,2,4,5,6};
   display(v1);

   cout<<"\nvec size "<<v1.size()<<endl;
   cout<<"vec max size"<<v1.max_size()<<endl;
   cout<<"vec capcity : "<<v1.capacity()<<endl;

   v1.push_back(8);
   display(v1);

      cout<<"\nvec size "<<v1.size()<<endl;
   cout<<"vec max size"<<v1.max_size()<<endl;
   cout<<"vec capcity : "<<v1.capacity()<<endl;

   v1.shrink_to_fit();
   display(v1);

  cout<<"\nvec size "<<v1.size()<<endl;
   cout<<"vec max size"<<v1.max_size()<<endl;
   cout<<"vec capcity : "<<v1.capacity()<<endl;
  
  v1.reserve(11);
    cout<<"\nvec size "<<v1.size()<<endl;
   cout<<"vec max size"<<v1.max_size()<<endl;
   cout<<"vec capcity : "<<v1.capacity()<<endl;
  



    
   


}


void test3(){
    cout<<"\n=========================="<<endl;
      vector <int> v1 {1,2,4,5,6};
   display(v1);

   v1[0]=11;
   v1.at(1)=78;
   display(v1);

    

}

void test4(){
  cout<<"\n=========================="<<endl;
   vector <person> p1;
   person px {"ayush",21};
   display(p1);
   p1.push_back(px);
   display(p1);

   p1.push_back(person{"divyanshu",20});
   display(p1);
   p1.emplace_back("veer",20);
   display(p1);



     
}


void test5(){
  cout<<"\n=========================="<<endl;

  vector <person> p{
    {"ayush",21},{"divyanshu",20},{"veer",20}};
  display(p);

  cout<<"front : "<<p.front()<<endl;
  cout<<"back  : "<<p.back()<<endl;
  
  p.pop_back();
  display(p);


     
}



void test6(){
  cout<<"\n++++++++++++++++++++++++++++++++++++++++"<<endl;
   vector <int> v1 {1,2,4,5,6};
   display(v1);
   v1.clear();
   display(v1);

   v1={1,4,7,8,9,9,0,6,5,4,4};
   display(v1);
   v1.erase(v1.begin(),v1.begin()+2);
   display(v1);
   v1={1,4,7,8,9,9,0,6,5,4,4};
   auto it = v1.begin();
   while (it != v1.end())
   {
      if(*it%2==0){
        v1.erase(it);
      }
      else{
        it++;
      }
   }
   display(v1);
   
  

    
}

void test7(){
  cout<<"\n++++++++++++++++++++++++++++++++++++++++"<<endl;
  vector <int> v1 {1,2,3,4,5};
  vector <int> v2 {10,20,30,40,50};
  display(v1);
  display(v2);

  cout<<endl;
  v2.swap(v1);
  display(v1);
  display(v2);

}

void test8(){
    cout<<"\n++++++++++++++++++++++++++++++++++++++++"<<endl;
     vector <int> v1 {1,2,3,4,5};
     display(v1);
     sort(v1.begin(),v1.end());
     display(v1);
     

   


}

















int main(){
    test1();
    test2();

    test3();

    test4();

    test5();

    test6();


    test7();

    test8();

}

