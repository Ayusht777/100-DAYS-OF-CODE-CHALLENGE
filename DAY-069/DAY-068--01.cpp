// Day - 69 of 100dayofcode [27/09/2022 Tuesday]

#include <iostream>
#include<string> 
#include<vector>
//functions

using namespace std;
// call by refenrece
char display(){
 
    cout<<"--------------------------------------------"<<endl;
    cout<<"P - TO PRINT THE NUMBERS IN THE LIST"<<endl;
    cout<<"A - TO ADD  THE NUMBERS IN THE LIST"<<endl;
    cout<<"M - TO DISPLAY THE MEAN NUMBERS IN THE LIST"<<endl;
    cout<<"S - TO DISPLAY THE SMALLEST NUMBERS IN THE LIST"<<endl;
    cout<<"Q - TO QUIT"<<endl;
    cout<<"--------------------------------------------"<<endl;
    
    cout << ""<<endl;
   
}

void func_p(vector <int> list){

   if(list.size()==0){
            cout<<"[] the list is empty"<<endl;
        }
        else{
            
            cout <<"[ ";
            for(auto i : list){
                cout<<i <<" ";
            }
            cout <<"]"<<endl;
        }

}


void func_a(vector <int> &list){
  int numa{0};
  cout<<"ENTER A NUMBER YOU WANT TO ADD IN THE LIST : ";
     cin >> numa;

     list.push_back(numa);
     cout <<"\n" <<numa<<" ADDED\n";

    
}

void func_m(vector <int> list){
  int sum {0};
  int avg{0};
  for ( auto j : list){

        sum = sum + j;
        

    }
    
    avg = sum/(list.size());
    cout  << "THE MEAN OF THE NUMBERS IS : "<<avg<<endl;
    

}

char selection(){
  char selection;
  cin >>selection;
  return(toupper(selection));

}

void func_s(vector <int> list){
  int smallest = list[0];
     for (auto x : list){

        if (x<smallest){
            smallest =x;
        }
     } 
     cout << "the smallest number is : "<<smallest<<endl;


}

int main(){
  vector <int> list {};
  char v{};
 
 do{
  display();
  v = selection();
  switch (v)
  {

  case 'P':
  
    func_p(list);
    break;
  

  case 'A':
  
  
    func_a(list);
    break;

  case 'M':
    func_m(list);
    break;
  case 'S':
    func_s(list);
    break;
   
     
     
  
  
  default:
    break;
  }
  }while(v!='Q');

  





}