#include<iostream>

//1009. Complement of Base 10 Integer
//https://leetcode.com/problems/complement-of-base-10-integer/

using namespace std;

class Solution {
public:
    int bitwiseComplement(int n) {
        
        int m =n;
        int mask =0;
        
        if(n==0){
            return 1;
        }
        while(m!=0){
            mask =(mask<<1)|1;
            m = m>>1;
            
        }
        
        int ans = (~n) &mask;
        return ans;
        
        
    }
};


int main(){
    Solution s;
    cout<<s.bitwiseComplement(5)<<endl;


}