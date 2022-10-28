#include<iostream>
#include<algorithm>
// sort 0 1
using namespace std;

void display(int arr[],int n){
    for(int i =0 ;i<n;i++){
        cout<<arr[i]<<' ';
    }
   cout<<endl;
}

void SortOne(int arr[],int n){
    int left = 0,right = n-1;
    while (left<right)
    {
        while (arr[left]==0&&left<right){
            left++;
        }

        while (arr[right]==1&&left<right)
        {
            right--;
        }
        if (left<right )
        {
           swap(arr[left],arr[right]);
        }
        
        
        
    }
    


}







int main(){
    
    int arr [] {1,0,0,1,0,1};

    display(arr,6);
    SortOne(arr,6);
    display(arr,6);


}




