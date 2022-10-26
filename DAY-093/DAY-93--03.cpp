#include<iostream>
#include<climits>
//max and minmum

using namespace std;

int find(const int arr[],int size,int element){
    

    for(int i=0;i<size;i++){
      if(arr[i]==element)
      {
        return 1;
      }
      

    }
    return 0;
}



int main(){
    int x[5]{0,4,7,-11,5};
    
    int f;
    cout<<"ENTER NUMBER TO FIND IN ARRAY : "<<endl;
    cin>>f;

    bool s = find(x,5,f);
    if(s){
        cout<<"element is found"<<endl;
    }
    
    else{
        cout<<"not found"<<endl;
    }

}