#include<iostream>


using namespace std;

int getPivot(int arr[],int size){
    int s =0;
    int e = size-1;
    int mid = s + (e-s)/2;

    while (s<e)
    {
        if(arr[mid]>=arr[0]){
            s = mid +1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    

    return s;//also can return e beause they will be same after loop
    
    
    
    
    }





int main(){

    int arr [3] {2,1,-1};
    cout<<getPivot(arr,3)<<endl;
   
    

}




