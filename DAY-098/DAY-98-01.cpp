#include<iostream>
//Search In Rotated Sorted Array 
//https://www.codingninjas.com/codestudio/problems/search-in-rotated-sorted-array_630450?leftPanelTab=0

using namespace std;
int getPivot(int* arr,int n){
    int s =0;
    int e = n-1;
  

    while (s<e)
    {    int mid = s + (e-s)/2;
        if(arr[mid]>=arr[e]){
            s = mid +1;
        }
        else{
            e = mid;
        }
        
    }
    

    return s;//also can return e beause they will be same after loop
 }

int BinarySreach(int *arr, int s,int e,int key)
{
 
//   int mid = (start+end)/2; is ma ek dikhat ha ki jab value bhot badi hogi toh error ayga 
  int mid = s + (e-s)/2;

 while (s<=e)
 {
    if(arr[mid]==key){
        return mid;
    }

    if (key>arr[mid]){
        s =mid +1;
    } 
    else{
        e =mid-1;
    }
    mid = s + (e-s)/2;

 }
 return -1;
 
  
}  



int search(int* arr, int n, int key) {
    
    int pivot =  getPivot(arr,n);
    
    if(key>=arr[pivot]&&key<=arr[n-1]){
        return BinarySreach(arr,pivot,n-1,key);
    }
    else{
        return BinarySreach(arr,0,pivot-1,key);
    }
}




int main(){
    int arr [] {5,4,1,2,3};
    cout<<search(arr,5,1);
    
    

}




