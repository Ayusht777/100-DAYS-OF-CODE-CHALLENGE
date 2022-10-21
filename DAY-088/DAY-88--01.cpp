#include <iostream>
#include<vector>
#include <set>
#include<map>
#include<list>

using namespace std;


void test1(){
    vector <int> vec {1,2,3,4,5};

    vector <int>::iterator it = vec.begin(); //pointes to 1
    // or
    auto  it1 = vec.begin(); //pointes to 1
cout<<"______________________________________________"<<endl;
    cout<<"it - 1 "<<*it1<<endl;

    it1++;  //pointing to  2

     cout<<"it - 2 "<<*it1<<endl;

     it1++; // pointing to  3

    cout<<"it - 3 "<<*it1<<endl;

     it1++; // pointing to  4

    cout<<"it - 4 "<<*it1<<endl;
     
     it1++; // pointing to  5

    cout<<"it - 5 "<<*it1<<endl;

    // or
    it1--; //pointing to  4

    it1 = vec.end()-1;

   
    cout<<"it - 5 "<<*it1<<endl;








}


void test2(){
    vector <int> vec {1,2,3,4,5};
    auto  it1 = vec.begin();
    cout<<"______________________________________________"<<endl;

    while(it1!= vec.end()){
        cout<<*it1<<endl;
        it1++;
    }
     it1 = vec.begin();

    while(it1!= vec.end()){
        *it1 =0;
        cout<<*it1<<endl;
        it1++;
    }




}

void test3(){

    vector <int> vec {1,2,3,4,5};
    vector <int>::const_iterator it = vec.begin();
    //auto  it1 = vec.cbegin();

   cout<<"______________________________________________"<<endl;
   while (it!=vec.end())
   {
     cout<<*it<<endl;
     it++;
   }
    it = vec.begin();
   while (it!=vec.end())
   { 
    // *it = 0;  read only 
     cout<<*it<<endl;
     it++;
   }


   


}


void test4(){

    vector <int> vec {1,2,3,4};
    auto  i = vec.rbegin();
    
    cout<<"______________________________________________"<<endl;
    while (i!=vec.rend())
    {
        cout<<*i<<endl;
        i++;
    }

    list <string> ls {"ayush","piyush","divyanshu"};
    auto i1 = ls.crbegin(); //constant reversed 

    while (i1!=ls.crend())
    {
        cout<<*i1<<endl;
        i1++;
    }

    map <string,string> m {
        {"ayush","python"},{"divynashu","c++"}
    };

    auto i2 = m.begin();

    cout<<i2->first<<" "<<i2->second<<endl;
    i2++;
     cout<<i2->first<<" "<<i2->second<<endl;



    

    


}

void test5(){
    
    vector <int> vec {1,2,3,4,5,6,7,8,9,10};
    auto start = vec.begin() +2;
    auto finall =vec.end()-2;
    cout<<"______________________________________________"<<endl;
    while (start!=finall)
    {
        cout<<*start<<endl;
        start++;
    }
    

    


}






int main(){

    test1();

    test2();

    test3();


    test4();

    test5();




}