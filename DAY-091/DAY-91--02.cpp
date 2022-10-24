#include<iostream>
using namespace std;
//https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int pro = 1;
        int sum =0;
        while(n!=0){
            int temp =n%10;
            pro = pro *temp;
            sum =sum +temp;
            n = n/10;
        }
        
        int r = pro-sum;
    return r;
    }
    
};
int main(){

    Solution s;
    cout<<s.subtractProductAndSum(4421)<<endl;

  

    



}