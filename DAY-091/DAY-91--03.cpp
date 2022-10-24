#include<iostream>
using namespace std;
//https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        int counter =0;
        
        while(n!=0){
            
            if(n&1){
                counter++;
            }
            n = n>>1;
        }
        return counter;
        
    }
};

int main(){

    Solution s;
    cout<<s.hammingWeight(00000000000000000000000000001011)<<endl;

  

    



}