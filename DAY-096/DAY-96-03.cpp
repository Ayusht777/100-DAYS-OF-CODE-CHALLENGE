#include<iostream>
//Binary Sreach Algo
// First and Last Position of an Element In Sorted Array 
//https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549
using namespace std;

int firstOcc(int arr[], int size,int k)
{
  int start =0;
  int end = size-1;
  int ans= -1;

  int mid = start + (end-start)/2;

 while (start<=end)
 {
    if(arr[mid]==k){
        ans = mid;
        end  = mid-1;
        
    }

    if (arr[mid]<k){
        start =mid +1;
    }
    if(arr[mid]>k){
        end =mid-1;
    }
    mid = start + (end-start)/2;

 }
 return ans;
 
  
}  
int LastOcc(int arr[], int size,int k)
{
  int start =0;
  int end = size-1;
  int ans= -1;

  int mid = start + (end-start)/2;

 while (start<=end)
 {
    if(arr[mid]==k){
        ans = mid;
        start  = mid+1;
        
    }

    if (arr[mid]<k){
        start =mid +1;
    }
    if(arr[mid]>k){
        end =mid-1;
    }
    mid = start + (end-start)/2;

 }
 return ans;
 
  
}  
/*
#include <bits/stdc++.h> 
int firstOcc(vector<int>& arr, int size,int k)
{
  int start =0;
  int end = size-1;
  int ans= -1;

  int mid = start + (end-start)/2;

 while (start<=end)
 {
    if(arr[mid]==k){
        ans = mid;
        end  = mid-1;
        
    }

    if (arr[mid]<k){
        start =mid +1;
    }
    if(arr[mid]>k){
        end =mid-1;
    }
    mid = start + (end-start)/2;

 }
 return ans;
 
  
}  
int LastOcc(vector<int>& arr, int size,int k)
{
  int start =0;
  int end = size-1;
  int ans= -1;

  int mid = start + (end-start)/2;

 while (start<=end)
 {
    if(arr[mid]==k){
        ans = mid;
        start  = mid+1;
        
    }

    if (arr[mid]<k){
        start =mid +1;
    }
    if(arr[mid]>k){
        end =mid-1;
    }
    mid = start + (end-start)/2;

 }
 return ans;
 
  
}  


pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    p.first =firstOcc(arr,n,k);
    
    p.second =LastOcc(arr,n,k);
    
    return p;
}*/ 




int main(){
    
    int arr1 [6] {1,2,4,5,2,1};
    cout<<"FIRST OCCURNACE OF 2 AT INDEX : "<<firstOcc(arr1,6,2)<<endl;;
    cout<<"LAST OCCURNACE OF 2 AT INDEX : "<<LastOcc(arr1,6,2)<<endl;;
 
    


    


}




