#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
    vector<vector<int>> ans;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n-1;j++){
            for(int l=j+1;l<n-1;l++ ){
                if(arr[i]+arr[j]+arr[l]==K)
                {   
                    vector <int> temp;
                    
                    cout<<arr[i] <<" "<<arr[j]<<" "<<arr[l];
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[l]);
                    break;
                    ans.push_back(temp);
                }
                
                
            }
        }
    }
    return ans;
}


int main(){
    vector<vector<int>> ans;
    
    vector <int> arr {1,2,3,1,2,3};
    int  n = 6;
    int K= 6;

    ans= findTriplets(arr,n,K);

   

}




