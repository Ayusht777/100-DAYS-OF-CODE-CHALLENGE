//dsa by luv babber
//patterns

#include<iostream>
using namespace std;

int main(){
    cout<<"PATTERN - 11"<<endl;
    int n{0};
    cout<<"ENTER A INTGER : ";
    cin>>n;
  char x;
    for(int i=1;i<=n;i++)
    {
        for(int j= 1 ;j<=n;j++)
        {   x= 'A'+i+j-2;

            cout<<x;
        }
        cout<<endl;
    }

    cout<<"PATTERN - 12"<<endl;
    n = 0 ;
    cout<<"ENTER A INTGER : ";
    cin>>n;
    x ='A';
    for(int i=1;i<=n;i++)
    {
        for(int j= 1 ;j<=i;j++)
        {   

            cout<<x;
        }
        x++;
        cout<<endl;
    }

    cout<<"PATTERN - 13"<<endl;
    n = 0 ;
    cout<<"ENTER A INTGER : ";
    cin>>n;
     x  = 'A';
     char v = x;
    for(int i=1;i<=n;i++)
    {   
        for(int j= 1 ;j<=i;j++)
        {    
           
            cout<<v;
            v++;
           
            
        }
        
        
        
        cout<<endl;
    }

  cout<<"PATTERN - 14"<<endl;
    n = 0 ;
    cout<<"ENTER A INTGER : ";
    cin>>n;
    x ='A';
    
    for(int i=1;i<=n;i++)
    {   x= 'A'+n-i;
        for(int j= 1 ;j<=i;j++)
        {    
          
            cout<<x;
            x++;
           
           

            
        }
        
       
        cout<<endl;
    }
  cout<<"PATTERN - 15"<<endl;
    n = 0 ;
    cout<<"ENTER A INTGER : ";
    cin>>n;
   
    
    for(int i=1;i<=n;i++)
    {  
         int s =n-i;
         while (s)
         {
            cout<<' ';
            s--;
         }
         


        for(int j= 1 ;j<=i;j++)
        {    
          
            cout<<'*';
            
           
           

            
        }
        
       
        cout<<endl;
    }

 

}