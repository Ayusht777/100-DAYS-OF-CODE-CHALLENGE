#include<iostream>
#include<vector>

using namespace std;
//Allocate Books
//https://www.codingninjas.com/codestudio/problems/ayush-and-ninja-test_1097574?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0



bool isPossible(vector<int> time,int n, int m,unsigned long long int mid ){
    unsigned long long int studentcount=1;
    unsigned long long int pagesum = 0;
    for(int i= 0;i<m;i++){
        if(pagesum + time[i] <=mid){
            pagesum +=time[i];
            
            
        }
        else{
            studentcount++;
            if(studentcount>n||time[i]>mid){
                return false;
            }
            pagesum = time[i];
            
        }
    }
    return true;
}
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{
     unsigned long long int s =0;
   unsigned long long int sum =0;
    for(int i=0;i<m;i++){
        sum = sum +time[i];
    }
   unsigned long long int e = sum;
   unsigned long long int mid = s + (e-s)/2;
     unsigned long long int ans =-1;
    while(s<=e){
        if(isPossible(time,n,m,mid)){
            ans  = mid;
            e = mid-1;
            
        }
           else
           {
             s = mid+1;  
           }
           mid = s + (e-s)/2;
    }
           return ans;

}


int main(){
    vector <int> v {1,2,2,3,1};
    int  n =3;
    int m =5;

    cout<<ayushGivesNinjatest(n,m,v);
    
    

}




