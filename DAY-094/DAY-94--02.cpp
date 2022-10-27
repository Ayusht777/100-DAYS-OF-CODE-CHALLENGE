#include<iostream>

//Find Unique 
//https://www.codingninjas.com/codestudio/problems/find-unique_625159

using namespace std;

int findUnique(int *arr, int size)
{
    //Write your code here
    int ans{0};
    for(int i{0};i<size;i++){
        ans = ans ^ arr[i];
    }
    return ans;
}
int main(){
    int a [7] {1,1,2,2,4,4,5};
    cout<<findUnique(a,7);


}