// Day - 71 of 100dayofcode [30/09/2022 Friday]

#include <iostream>


using namespace std;

int *dynamic_array(size_t size, int int_v = 0){
  int *storage_p {nullptr};
  storage_p = new int[size]; //dynamic memory alloaction
  for(size_t i{0};i<size;i++){
    *(storage_p + i) = int_v;

  }
  return storage_p;

}
void dipplay(const int *const arr,size_t size){
  for(size_t i {0};i<size;i++){
    cout<<arr[i]<<endl;
  }
  cout<<endl;

}


//returing pointers to function 
int main(){
  int *new_arr{nullptr};
  size_t size;
  int value{};
  cout<<"\nHOW MANY INTGERS WOULD YOU LIKE TO ALLOCATE ?";
  cin>>size;
  cout<<"VALUE OF EACH ELEMENT :";
  cin>>value;

  new_arr = dynamic_array(size,value);
  cout<<"_______________________________________"<<endl;

  dipplay(new_arr,size);

  delete [] new_arr;


}