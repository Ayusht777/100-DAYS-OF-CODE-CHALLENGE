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

void SortOnetwo(int arr[],int n){
    int i = 0,j=n-2,k = n-1;
    while (i+1<j&&i+2<k)
    {
        while (arr[i]==0&&(i+1<j&&i+2<k)){
            i++;
            
        }
        
        while(arr[j]==1&&(j<k&&j>i)){
            j--;
        }
        while (arr[k]==2&&(k>j&&k>i+2))
        {
            k--;
        }
        
       if (k>j&&(arr[j]==2&&arr[k]==1))
        {
           swap(arr[j],arr[k]);
        }

        if((arr[i]==1&&arr[j]==0))
        {
            swap(arr[i],arr[j]);
        }



        
        
        
    }
    


}







int main(){
    
    int arr [] {0,1,1,0,0,1,1,0,1,0};

    display(arr,10);
    SortOnetwo(arr,10);
    display(arr,10);


}




