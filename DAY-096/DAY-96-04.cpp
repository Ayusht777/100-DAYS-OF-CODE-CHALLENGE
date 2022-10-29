#include<iostream>
#include<algorithm>
//Binary Sreach Algo
// find total number of occurrences of an element in sorted array
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


int main(){
    //arry should be sorted
    int arr1 [6] {1,2,2,2,3,4};

    int total = (LastOcc(arr1,6,2)-firstOcc(arr1,6,2) ) + 1;
    cout<<LastOcc(arr1,6,2)<<endl;
    cout<<firstOcc(arr1,6,2)<<endl;

    cout<<"Total number of 2 in a array : "<<total<<endl;

 
    


    


}




