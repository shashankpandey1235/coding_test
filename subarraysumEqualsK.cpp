#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int , int > map ;
        map[0] = 1 ;    // {0.1}
        int prefix = 0 ;
        int count = 0 ;
        
        for( int num : nums ){
            prefix+=num ;
            
            
            
            if( map.find(prefix - k ) != map.end()){
                count+= map[prefix - k];
            }
            map[prefix]++;  // preserve the element as prefix 
        }
        
        return count ;
    }
};

int main() {
    Solution sol ;
    
    vector<int> nums1 = {1 , 2 , 3 } ;
    int k = 3 ;
    
    int ans = sol.subarraySum(nums1 , k );
    cout<< ans << " ";
    
    

}
