#include<iostream>
#include<climits>
//max and minmum

using namespace std;

int getsum(int arr[],int size){
    int sum = 0;

    for(int i=0;i<size;i++){
      sum = arr[i]+sum;
      

    }
    return sum;
}



int main(){
    int x[5]{0};
    
    cout<<"ENTER ELMEENT IN ARRAY : "<<endl;
    for(int i{0};i<5;i++){
        cin>>x[i];
    }
    cout<<"the sum of array  is : "<<getsum(x,5);

}