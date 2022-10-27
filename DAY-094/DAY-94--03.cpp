#include<iostream>
#include<vector>
#include<algorithm>
//1207. Unique Number of Occurrences
//https://leetcode.com/problems/unique-number-of-occurrences/

using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       
        vector <int> x;
        int i =0;
        sort(arr.begin(),arr.end());
        while(i<arr.size()){
            int c =1;
            for(int j =i+1;j<arr.size();j++){
                if(arr[i]==arr[j]){
                    
                    c++;
                }
                else{
                    break;
                }
                
            }
            x.push_back(c);
            i =i+c;
            
        }
        sort(x.begin(),x.end());
        for (i = 0; i < x.size() - 1; i++){
            if (x[i] == x [i+1])
                return false;
        }
        return true;
        
        
        
        
    }
};
int main(){
    vector <int> v {1,1,2,3,3,3};
   

    Solution s;
   bool  x = s.uniqueOccurrences(v);


}