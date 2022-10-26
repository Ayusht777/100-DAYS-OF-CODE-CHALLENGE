#include<iostream>
#include<climits>
//max and minmum

using namespace std;

int getMax(int arr[],int size){
    int max = INT_MIN;

    for(int i=0;i<size;i++){
      if(arr[i]>max){
        max = arr[i];
      }

    }
    return max;
}

int getMin(int arr[],int size){
    int max = INT_MAX;

    for(int i=0;i<size;i++){
      if(arr[i]<max){
        max = arr[i];
      }

    }
    return max;
}

int main(){
    int x[5]{0};
    
    cout<<"ENTER ELMEENT IN ARRAY : "<<endl;
    for(int i{0};i<5;i++){
        cin>>x[i];
    }
    cout<<getMax(x,5)<<endl;
    cout<<getMin(x,5)<<endl;

}