//dsa by luv babber
//patterns

#include<iostream>
using namespace std;

int main(){
    cout<<"PATTERN - 7"<<endl;
    int n{0};
    cout<<"ENTER A INTGER : ";
    cin>>n;
    int v {1};

    for(int i=1;i<=n;i++)
    {   
        v=i;
        for(int j= 1 ;j<=i;j++)
        {
            cout<<v;
            v+=1;
        }
        cout<<endl;
    }
    cout<<"PATTERN - 7.1"<<endl;
    n =0;
    cout<<"ENTER A INTGER : ";
    cin>>n;
    

    for(int i=1;i<=n;i++)
    {   
      
        for(int j= 1 ;j<=i;j++)
        {    
            cout<<i+j-1;

            
        }
        cout<<endl;
    }

cout<<"PATTERN - 8"<<endl;
    n =0;
    cout<<"ENTER A INTGER : ";
    cin>>n;
    
    

    for(int i=1;i<=n;i++)
    {   
         v=i;
        for(int j= 1 ;j<=i;j++)
        {    
            cout<<v;
            v--;
        
            


            
        }
        cout<<endl;
    }


cout<<"PATTERN - 8.1"<<endl;
    n =0;
    cout<<"ENTER A INTGER : ";
    cin>>n;
    
    

    for(int i=1;i<=n;i++)
    {   
         
        for(int j= 1 ;j<=i;j++)
        {    
            cout<<i-j+1;
           
        
            


            
        }
        cout<<endl;
    }

cout<<"PATTERN - 9"<<endl;
    n =0;
    cout<<"ENTER A INTGER : ";
    cin>>n;
    char x {'A'};

      for(int i=1;i<=n;i++)
    {     
        for(int j= 1 ;j<=n;j++)
        {    
            cout<<x;
        }
        x++;
         
        cout<<endl;
    }

cout<<"PATTERN - 10"<<endl;
    n =0;
    cout<<"ENTER A INTGER : ";
    cin>>n;
    char z = 'A';
   

      for(int i=1;i<=n;i++)
    {     
        for(int j= 1 ;j<=n;j++)
        {   
            cout<<z;
            z++;
        }
        
         
        cout<<endl;
    }




}