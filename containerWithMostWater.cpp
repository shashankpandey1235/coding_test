#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0 ;
        int right = n - 1 ;
        int area = 0 ;
        while( left < right ){
      
        int h = min( height[left] , height[right]);
        area = max ( area , h * (right-left));
           
        
        if( height[left] < height[right]){
            left++;
        }else {
            right--;
        }
        }
        return area ;
        
        }
        
    
};


int main() {
	// your code goes here
	Solution sol ;
	vector<int>height = {1,8,6,2,5,4,8,3,7};
int ans = 	sol.maxArea(height);
	
cout << ans ;
}
