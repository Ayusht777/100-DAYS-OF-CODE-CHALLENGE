#include<iostream>
//Binary Sreach Algo
using namespace std;


//opmitmize done
int BinarySreach(int arr[], int size,int key)
{
  int start =0;
  int end = size-1;
//   int mid = (start+end)/2; is ma ek dikhat ha ki jab value bhot badi hogi toh error ayga 
  int mid = start + (end-start)/2;

 while (start<=end)
 {
    if(arr[mid]==key){
        return mid;
    }

    if (key>arr[mid]){
        start =mid +1;
    }
    else{
        end =mid-1;
    }
    mid = start + (end-start)/2;

 }
 return -1;
 
  
}  




int main(){
    
    int arr1 [6] {1,2,3,4,5,6};
    int arr2 [5] {0,2,5,8,9};
    int f = BinarySreach(arr1,6,2);
    cout<<"FIND 2 IN ARR1 -> INDEX : "<<f<<endl;
    cout<<"FIND 5 IN ARR2 -> INDEX : "<<BinarySreach(arr2,5,5)<<endl;
    cout<<"FIND -2 IN ARR2 -> INDEX : "<<BinarySreach(arr2,5,-2)<<endl;


    


}




