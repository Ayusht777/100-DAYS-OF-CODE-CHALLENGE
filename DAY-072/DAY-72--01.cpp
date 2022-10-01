// Day - 72 of 100dayofcode [01/10/2022 Saturday]

#include <iostream>

using namespace std;

int * applyall(const int * const arr1,size_t size1,const int * const arr2,size_t size2){
  int *new_Arr{};
  new_Arr = new int[size1*size2]; //dynmaic arr
  int index{0};
  for(size_t i{0};i<size2;i++){
    for(size_t j{0};j<size1;j++){
      new_Arr[index] = arr1[j]*arr2[i];
      index++;


    }

  }
  return new_Arr; // because array itself act ass a pointer

}

void print(const int *const arr,size_t z ){
  cout<<"[";
  for(size_t i{0};i<z;i++){
    cout<<i<<" ";
  }
  cout<<"]";

}
//psection challange
int main(){
  int arr1 []{1,2,3,4,5};
  int arr2 []{3,2};

  int *holder_p;

  cout<<"Array 1 : "<<endl;
  print(arr1,5);
  cout<<"\n___________________________________________"<<endl;
  cout<<"Array 2 : "<<endl;
  print(arr2,2);
  
  holder_p = applyall(arr1,5,arr2,2);
  size_t size (5*2);
   cout<<"\n___________________________________________"<<endl;
cout<<"Array 3 : "<<endl;
  print(holder_p,size);
  cout<<"\nsize of array : "<<size<<endl;

  



}