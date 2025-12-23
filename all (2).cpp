#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {

int res = 0 ;
for( int num : nums ){
    res ^= num ;
}
return res ;

    }
};

int main(){
    
    Solution sol ;
  
    vector<int> nums = {4,1,2,1,2};
    
    int ans = sol.singleNumber(nums);
    
    cout<< ans ;
    
    return 0;
}