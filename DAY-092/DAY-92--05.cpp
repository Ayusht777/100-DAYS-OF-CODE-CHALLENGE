#include<iostream>
#include<math.h>

//231. Power of Two
//https://leetcode.com/problems/power-of-two/

using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        for(int i =0;i<=30;i++){
            int ans = pow(2,i);
            if(ans ==n){
                return true;
            }
            
        }
        return false;
        
    }
};


int main(){
    Solution s;
    cout<<s.isPowerOfTwo(16)<<endl;


}