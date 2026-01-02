#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0 ;
        int ans = 0 ;
        unordered_set<char> set ;
        
        for( int right = 0 ; right < s.length() - 1 ; right++){
            while(set.count(s[right])){
                set.erase(s[left]);
                left++;
            }
            set.insert(s[right]);
            
            ans = max( ans , right - left + 1 );
        }
        
        return ans ;
        
    }
};

int main() {
	// your code goes here
	Solution sol ;
	string st = "abcabcbb";
	int ans = sol.lengthOfLongestSubstring( st );
	cout<< ans << " ";
	

}
