#include<iostream>

//

using namespace std;

int swap2case(int arr[],int size){
    

    for(int i=0;i<size;i+=2){
      if(i+1<size){
        swap(arr[i],arr[i+1]);
      }

    }
    
}

int print(int arr[],int size){
    

    for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";

    }
    cout<<endl;
    
}

int main(){
    int even[6]{1,2,3,4,5,6};
    int odd[5] {2,3,4,5,6};
    print(even,6);
    print(odd,5);
    swap2case(even,6);
     print(even,6);
    swap2case(odd,5);
     print(odd,5);


}