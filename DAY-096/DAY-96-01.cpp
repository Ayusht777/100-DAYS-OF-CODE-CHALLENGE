#include<iostream>
#include<algorithm>
// sort 0 1 2
using namespace std;

void display(int arr[],int n){
    for(int i =0 ;i<n;i++){
        cout<<arr[i]<<' ';
    }
   cout<<endl;
}

//opmitmize done
void sort012(int *arr, int n)
{
  int i=0;
  int mid = 0;
    int k=n-1;
  while(mid<=k){
      if(arr[mid]==0){
    
          swap(arr[i],arr[mid]);
          i++;
          mid++;
      }
      else if(arr[mid]==1){
          mid++;
          
       }
         
      else if(arr[mid]==2){
          swap(arr[mid],arr[k]);
          k--;
   
      }
}
}  




int main(){
    
    int arr [] {0,1,1,2,0,2,1,0,1,0};

    display(arr,10);
    sort012(arr,10);
    display(arr,10);


}




