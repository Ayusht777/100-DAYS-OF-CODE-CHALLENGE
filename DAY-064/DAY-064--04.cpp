// Day - 64 of 100dayofcode [22/09/2022 Thrusday]

#include <iostream>
#include<vector>
//section challange


using namespace std;
int main(){
  
vector <int> list{};
char selection{};
int numa{};
int sum{0};
int avg{0};


do{
    cout<<"--------------------------------------------"<<endl;
    cout<<"P - TO PRINT THE NUMBERS IN THE LIST"<<endl;
    cout<<"A - TO ADD  THE NUMBERS IN THE LIST"<<endl;
    cout<<"M - TO DISPLAY THE MEAN NUMBERS IN THE LIST"<<endl;
    cout<<"S - TO DISPLAY THE SMALLEST NUMBERS IN THE LIST"<<endl;
    cout<<"Q - TO QUIT"<<endl;
    cout<<"--------------------------------------------"<<endl;
    cin>>selection;
    cout << ""<<endl;

  
    switch (selection)
    {
        
    case 'p':
    case 'P':
      if (selection == 'p' || selection == 'P'){
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
    break;

    case 'A':
    case 'a':
     
     cout<<"ENTER A NUMBER YOU WANT TO ADD IN THE LIST : ";
     cin >> numa;

     list.push_back(numa);
     cout <<"\n" <<numa<<" ADDED\n";

    case 'm':
    case 'M':
    
    for ( auto j : list){

        sum = sum + j;
        

    }
    
    avg = sum/(list.size());
    cout  << "THE MEAN OF THE NUMBERS IS : "<<avg<<endl;
    

    case 's':
    case 'S':
    {
      int smallest = list[0];
     for (auto x : list){

        if (x<smallest){
            smallest =x;
        }
     } 
     cout << "the smallest number is : "<<smallest<<endl;
/// allwysa suse scope
    }
    
       
    }

} while (selection != 'q' && selection != 'Q');






  
}