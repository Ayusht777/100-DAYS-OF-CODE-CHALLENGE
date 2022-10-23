//dsa by luv babber
//patterns

#include<iostream>
using namespace std;

int main(){
    int n{0};
    cout<<"ENTER A INTGER : ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j= 1 ;j<=n;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }


cout<<"PATTERN - 2"<<endl;
    cout<<"ENTER A INTGER : ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j= 1 ;j<=n;j++)
        {
            cout<<n-j+1;
        }
        cout<<endl;
    }


cout<<"PATTERN - 3"<<endl;
  cout<<"ENTER A INTGER : ";
    cin>>n;
    int c{1};

    for(int i=1;i<=n;i++)
    {
        for(int j= 1 ;j<=n;j++)
        {
            cout<<" "<<c; 
            c+=1;
        }
        cout<<endl;
    }

cout<<"PATTERN - 4"<<endl;

cout<<"ENTER A INTGER : ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j= 1 ;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

cout<<"PATTERN - 5"<<endl;

cout<<"ENTER A INTGER : ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j= 1 ;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }

cout<<"PATTERN - 6"<<endl;


cout<<"ENTER A INTGER : ";
    cin>>n;
    c =1;

    for(int i=1;i<=n;i++)
    {
        for(int j= 1 ;j<=i;j++)
        {
            cout<<" "<<c;
            c+=1;
        }
        cout<<endl;
    }



}