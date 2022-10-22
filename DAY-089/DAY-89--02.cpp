#include <iostream>
#include<array> //it is diffrent than c array or raw array
#include<algorithm>
#include<numeric> // for  accumlate function / sum function

using namespace std;

void display(const array<int,5> &arr ){
  cout<<"[ ";
  for(auto i:arr){
    cout<<i<<" ";
  }
  cout<<"]"<<endl;
}

void test1(){
    cout<<"\n=========================="<<endl;
    array <int,5> a1 {1,2,3,4,5};
    array <int,5> a2;
    array <int,5> a3{};
    display(a1);
    display(a2);
    display(a3);
    a2 = {10,20,30,40,50};
    
     display(a1);
    display(a2);
    display(a3);

    cout<<"Size of array a1 : "<<a1.size()<<endl;
    cout<<"Size of array a2 : "<<a2.size()<<endl;
    cout<<"Size of array a3 : "<<a3.size()<<endl;

   a2[0] =100;
   a2.at(1)=1000;

   display(a2);

   cout<<"FRONT OF A1 : "<<a1.front()<<endl;
   cout<<"BACK OF A1 : "<<a1.back()<<endl;



    



}


void test2(){

    cout<<"\n=========================="<<endl;

    array <int,5> a1 {1,2,3,4,5};
    array <int,5> a2 {10,20,30,40,50};
    display(a1);
    display(a2);
    a1.fill(1);
    display(a1);
    display(a2);
    a1= {1,2,3,4,5};
    a1.swap(a2);
    display(a1);
    display(a2);

   


}


void test3(){
    cout<<"\n=========================="<<endl;
     array <int,5> a1 {1,2,3,4,5};

     int *p = a1.data();
     display(a1);
     cout<<p<<endl;
     *p =477;
     display(a1);

    

}

void test4(){
  cout<<"\n=========================="<<endl;
   array <int,5> a1 {2,4,3,1,5};
     display(a1);
     sort(a1.begin(),a1.end());
     display(a1);


     
}


void test5(){
  cout<<"\n=========================="<<endl;
     array <int,5> a1 {2,4,3,1,5};
     display(a1);
     auto min_i = min_element(a1.begin(),a1.end());
     auto max_i = max_element(a1.begin(),a1.end());

     cout<<"min : "<<*min_i<<" max : "<<*max_i<<endl;

}



void test6(){
  cout<<"\n++++++++++++++++++++++++++++++++++++++++"<<endl;
  array <int,5> a1 {2,4,4,1,5};
  auto adj = adjacent_find(a1.begin(),a1.end());
  
  if(adj!=a1.end()){
    cout<<"Adj found the elemnet : "<<*adj<<endl;
  }
  else{
    cout<<"not found"<<endl;
  }

    
}

void test7(){
  cout<<"\n++++++++++++++++++++++++++++++++++++++++"<<endl;
  array <int,5> a1 {2,4,4,1,5};

  int sum = accumulate(a1.begin(),a1.end(),0);
  cout<<"sum "<<sum<<endl;

}

void test8(){
    array <int,7> a1 {2,4,4,1,5,8,9};

    int coun = count(a1.begin(),a1.end(),4);
    cout<<"count of 4 is "<<coun<<endl;



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

