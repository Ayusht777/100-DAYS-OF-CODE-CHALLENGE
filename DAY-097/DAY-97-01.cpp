#include<iostream>
#include<vector>
//852. Peak Index in a Mountain Array
//https://leetcode.com/problems/peak-index-in-a-mountain-array/ 
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0;
        int e = arr.size()-1;
        int  m  = s + (e-s)/2;
        while(s<e){
            if(arr[m]<arr[m+1]){
                s = m +1;
            }
            
            else
            {
                e = m;
            }
            m  = s + (e-s)/2;
        }
        return s;// return index
        
    }
};





int main(){
    vector <int> v {1,2,3,4,5,2,1};
    Solution s;
    cout<<s.peakIndexInMountainArray(v);
    
    

}




