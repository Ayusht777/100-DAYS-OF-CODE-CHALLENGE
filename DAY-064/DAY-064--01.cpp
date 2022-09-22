// Day - 64 of 100dayofcode [22/09/2022 Thrusday]

#include <iostream>

//while loop


using namespace std;
int main(){
  

int x{0};

while(x<=5){

    cout<<x<<endl;
    x++;
}

cout <<"_________________________________________________"<<endl;
x = 0;
while(x<=5){

    cout<<x<<endl;
    x++;
}
x = 10;
while(x>0){

    cout<<x<<endl;
    x--;
}

cout <<"_________________________________________________"<<endl;



// cout<<"enter a interger greater than 100 and less than 0 :";
// cin >>num;

// while(num >=100 ){

//     cout<<"enter a interger greater than 100 and less than 0 :";
//     cin >>num;
    
//     cout <<"_________________________________________________"<<endl;
    
    

// }

int num{0};
bool c {false};
x =0;

while(!c){

     cout<<"enter a interger greater than 100 and less than 0 :";
     cin >>num;
    
     if ( num >=1 && num <=50){

       cout <<"the number is between the range "<<endl;
        c = true;

     }
     else{
        cout <<"the number is between the range "<<endl;
        
     }
    


}




  
}