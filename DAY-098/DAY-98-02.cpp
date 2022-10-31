#include<iostream>
//Square root of an element using binary search
//https://leetcode.com/problems/sqrtx/submissions/
using namespace std;
long long int BinarySreach(int n){
        int s=0;
        int e =n;
       long long int m = s +(e-s)/2;
        long long int ans = -1; 
        while(s<=e){
           long long int sqt = m*m;
           
            if(sqt==n){
                return m;
            }
            if(sqt<n){
                ans  = m;
                s = m +1;
            }
            else{
                e  = m-1;
            }
            m = s +(e-s)/2;
        }
        return ans;
        
        
        
    }

double percision(int n,int per,int tempsol)
{
    double factor  = 1;
    double ans = tempsol;

    for(int i =0 ;i<per;i++){
        factor = factor /10;
        for ( double  j=ans; j*j <n; j=j+factor)
        {
            ans =j;
        }
        
    }
    return ans;

}




int main(){
    int number;
    cout<<"Enter a Number : ";
    cin>>number;
    int tempsol =BinarySreach(number);
    cout<<percision(number,2,tempsol)<<endl;

   
    
    

}




