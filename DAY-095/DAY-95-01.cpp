#include<iostream>
#include<vector>

using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m){  
    vector <int> ans;
	int i=0 ,j =0;
    while(i<n&&j<m){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
            
        }
        else{
            j++;
        }
    }
    return ans;
}


int main(){
    vector <int> a1 {4,1,2,5,6};
    vector <int> a2 {0,7,5,2,8};

    vector<int> ans  = findArrayIntersection(a1,5,a2,5);
  


}




