#include<iostream>
#include<climits>
//max and minmum

using namespace std;

void reverse(int arr[],int size){
    
    int start {0};
    int end{size-1};
    while (start<=end)
    {
      swap(arr[start],arr[end]);
      start++;
      end--;
    }
    
     
   
}
void display(int arr[],int size){
    
     
     for(int i{0};i<size;i++){
      cout<<arr[i]<<" ";
     }
     cout<<endl;
   
}



int main(){
    int x[5]{0,4,7,-11,5};
    int q [5] {4,7,8,9,-1};
    display(x,5);
    display(q,5);
    reverse(x,5);
    reverse(q,5);
    display(x,5);
    display(q,5);



}