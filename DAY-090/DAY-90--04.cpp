//dsa by luv babber
//patterns

#include<iostream>
using namespace std;

int main(){
    cout<<"PATTERN - 16"<<endl;
    int n{0};
    cout<<"ENTER A INTGER : ";
    cin>>n;
    
    for(int i=n;i>0;i--)
    {
        for(int j=1 ;j<=i;j++)
        {  

            cout<<'*';
        }
        cout<<endl;
    }
    cout<<"PATTERN - 17"<<endl;
    n =0;
    cout<<"ENTER A INTGER : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        int s =n-i;
        while (s)
        {
            cout<<" ";
            s-=1;

        }
        for(int j =1;j<=i;j++){
            cout<<j;
        }
        int x =i-1;
        while (x)
        {
            cout<<x;
            x-=1;
        }
        cout<<endl;

        


    }

   
 

}